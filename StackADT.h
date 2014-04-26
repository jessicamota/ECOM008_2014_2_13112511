#ifndef STACKADT_H
#define STACKADT_H

// Stack abtract class
class StackADT {
private:
  void operator =(const StackADT&) {}     // Protect assignment
  StackADT(const StackADT&) {}
public:
  StackADT() {}
  virtual  ~StackADT() {}
// Protect copy constructor
  // Default constructor
  // Base destructor
  // Reinitialize the stack.  The user is responsible for
  // reclaiming the storage used by the stack elements.
  virtual void clear() = 0;
  // Push an element onto the top of the stack.
  // it: The element being pushed onto the stack.
  virtual void push(const int& it) = 0;
  // Remove the element at the top of the stack.
  // Return: The element at the top of the stack.
  virtual int pop() = 0;
  // Return: A copy of the top element.
  virtual const int& topValue() const = 0;
  // Return: The number of elements in the stack.
  virtual int length() const = 0;
};

#endif // STACKADT_H
