#ifndef LISTADT_H
#define LISTADT_H

#include "Item.h"

class ListADT { // List ADT
    private:
      void operator = (const ListADT&) {}      // Protect assignment
      ListADT(const ListADT&) {}           // Protect copy constructor
public:
    ListADT() {}          // Default constructor
    virtual ~ListADT() {} // Base destructor
    // Clear contents from the list, to make it empty.
    virtual void clear() = 0;
    // Insert an element at the current location.
    // item: The element to be inserted
    virtual void insert(const int& item) = 0;
    // Append an element at the end of the list.
    // item: The element to be appended.
    virtual void append(const int& item) = 0;
    // Remove and return the current element.
    // Return: the element that was removed.
    virtual int remove() = 0;
    // Set the current position to the start of the list
    virtual void moveToStart() = 0;
    // Set the current position to the end of the list
    virtual void moveToEnd() = 0;
    // Move the current position one step left. No change
    // if already at beginning.
    virtual void prev() = 0;
    // Move the current position one step right. No change
    // if already at end.
    virtual void next() = 0;
    // Return: The number of elements in the list.
    virtual int length() const = 0;
    // Return: The position of the current element.
    virtual int currPos() const = 0;
    // Set current position.
    // pos: The position to make current.
    virtual void moveToPos(int pos) = 0;
    // Return: The current element.
    virtual const int& getValue() const = 0;
};

#endif // LISTADT_H
