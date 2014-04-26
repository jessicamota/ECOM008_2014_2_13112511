#include "Queue.h"
#include <QDebug>

Queue::Queue() {}

void Queue:: clear() {
    qDebug() << "clear!";
    Item * current = m_base;
    for (int i = 0; i < m_count; ++i) {
        Item * aux = current->next;
        delete current;
        current = aux;
        delete aux;
    }
    m_count = 0;
}

void Queue:: enqueue(const int& item) {
    qDebug() << "enqueue!";
    Item * newItem = new Item();
    newItem->value = item;

    if(m_base) {
        Item * iterator = m_base;
        while(iterator->next) {
            iterator = iterator->next;
        }
        iterator->next = newItem;
    } else {
        m_base = newItem;
    }
    ++m_count;
}

int Queue:: dequeue() {
    qDebug() << "dequeue!";
    Item * aux = m_base;
    int value = aux->value;
    m_base = m_base->next;
    delete aux;
    --m_count;
    return value;
}

const int &Queue::frontValue() const
{
    qDebug() << "frontValue!";
    return m_base->value;
}

int Queue::length() const
{
    qDebug() << "length!";
    return m_count;
}
