#ifndef QUEUE_H
#define QUEUE_H

#include "QueueADT.h"
#include "Item.h"

class Queue : public QueueADT {
private:
  void operator = (const Queue&) {}      // Protect assignment
  Queue(const Queue&) {}           // Protect copy constructor
public:
    Queue ();
    void clear();
    void enqueue(const int& item);
    int dequeue();
    const int& frontValue() const;
    int length() const;
private:
    Item * m_base;
    int m_count;
};

#endif // QUEUE_H
