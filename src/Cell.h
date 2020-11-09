#ifndef __CELL_H__
#define __CELL_H__

#include <cstdlib>
#include <fstream>
using namespace std;


/**
*\ class Cell
*\ brief Cell with coordonate (x,y)
*/
class Cell
{
  /**
  *\ brief Creates a cell
  *\ param x  x coordinate
  *\ param y  y coordinate 
  */
  public:
    Cell(int x, int y);
    ~Cell();

    void add_neighb(Cell *n1);
    void add_neighb(Cell *n1, Cell *n2);
    void add_neighb(Cell *n1, Cell *n2, Cell *n3);
    friend ostream& operator<<(ostream& stream, const Cell& r);
    friend istream& operator>>(istream& stream, Cell& r);
  //protected:

    int m_x, m_y; //pas const pour la lecture fichier
    int m_nb_neighb = 0;
    Cell **m_neighb = NULL;
    bool m_displayed = false;
    bool m_flag = false;
    bool m_serial = false;
};

#endif