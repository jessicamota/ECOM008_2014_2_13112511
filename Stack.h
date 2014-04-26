#ifndef STACK_H
#define STACK_H

#include "StackADT.h"
#include "Item.h"

class Stack : public StackADT {
private:
  void operator = (const Stack&) {}      // Protect assignment
  Stack(const Stack&) {}           // Protect copy constructor
public:
    Stack ();
    void clear();
    void push(const int& it);
    int pop();
    const int& topValue() const;
    int length() const;
private:
    Item * m_base;
    int m_count;
};

#endif // STACKADT_H
