#ifndef QUEUEADT_H
#define QUEUEADT_H

// Abstract queue class
class QueueADT {
private:
  void operator =(const QueueADT&) {}     // Protect assignment
  QueueADT(const QueueADT&) {}         // Protect copy constructor
public:
  QueueADT() {}          // Default
  virtual ~QueueADT() {} // Base destructor
  // Reinitialize the queue.  The user is responsible for
  // reclaiming the storage used by the queue elements.
  virtual void clear() = 0;
  // Place an element at the rear of the queue.
  // it: The element being enqueued.
  virtual void enqueue(const int&) = 0;
  // Remove and return element at the front of the queue.
  // Return: The element at the front of the queue.
  virtual int dequeue() = 0;
  // Return: A copy of the front element.
  virtual const int& frontValue() const = 0;
  // Return: The number of elements in the queue.
  virtual int length() const = 0;
};

#endif // QUEUEADT_H
