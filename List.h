#ifndef LIST_H
#define LIST_H

#include "ListADT.h"
#include "Item.h"

class List: public ListADT
{
private:
  void operator = (const List&) {}      // Protect assignment
  List(const List&) {}           // Protect copy constructor
public:
    List();
    void insert(const int& item);
    void append(const int& item);
    void clear();
    int remove();
    void prev();
    void moveToStart();
    void moveToEnd();
    void next();
    int length() const;
    void moveToPos(int pos);
    int currPos() const;
    const int& getValue() const;
private:
    Item * m_base;
    Item * m_current;
    int m_count;
};

#endif // LIST_H
