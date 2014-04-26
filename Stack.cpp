#include "Stack.h"
#include <QDebug>

Stack::Stack() {}

void Stack::clear()
{
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

void Stack::push(const int &it)
{
    qDebug() << "push!";
    Item * newItem = new Item();
    newItem->value = it;
    newItem->next = m_base;
    m_base = newItem;
    ++m_count;
}

int Stack::pop()
{
    qDebug() << "pop!";
    Item * aux = m_base;
    int value = aux->value;
    m_base = m_base->next;
    delete aux;
    --m_count;
    return value;
}

const int &Stack::topValue() const
{
    qDebug() << "topValue!";
    return m_base->value;
}

int Stack::length() const
{
    qDebug() << "length!";
    return m_count;
}
