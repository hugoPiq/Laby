#include "catch.hpp"
#include "Cell.h"
using namespace Catch;
using namespace std;

TEST_CASE("add neigbor")
{
    SECTION("Test 1")
    {
        Cell x0(0,0);
        Cell x1(0,1);
        CHECK(x0.m_nb_neighb == 0);
        x0.add_neighb(&x1);
        CHECK(x0.m_nb_neighb == 1);
    }
}