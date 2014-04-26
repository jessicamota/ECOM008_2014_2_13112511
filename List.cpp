#include "List.h"
#include <QDebug>

List::List() {}

void List::clear()
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

void List::insert(const int &item)
{
    qDebug() << "insert!";
    Item * it = new Item();
    it->value = item;

    if (m_base) {
        if (m_count == 1) {
            m_base->next = it;
        } else {
            it->next = m_current->next;
            m_current->next = it;
        }
    } else {
        m_base = it;
    }

    m_current = it;
    ++m_count;
}

void List::append(const int &item)
{
    qDebug() << "append!";
    Item * it = new Item();
    it->value = item;
    moveToEnd();
    m_current->next = it;
    m_current = it;
    ++m_count;
}

int List::remove()
{
    qDebug() << "remove!";

    Item * toBeDeleted = m_current;
    this->prev();
    m_current->next = toBeDeleted->next;
    int result = toBeDeleted->value;
    --m_count;
    delete toBeDeleted;
    return result;
}

void List::moveToStart()
{
    qDebug() << "moveToStart!";
    m_current = m_base;
}

void List::moveToEnd()
{
    qDebug() << "moveToEnd!";
    if(m_base && m_current && m_current != m_base) {
        Item * iterator = m_base;
        while(iterator->next) {
            iterator = iterator->next;
        }
        m_current = iterator;
    }
}

void List::prev()
{
    qDebug() << "prev!";
    if(m_base && m_current && m_current != m_base) {
        Item * iterator = m_base;
        while(iterator->next != m_current);
        m_current = iterator;
    }
}

void List::next()
{
    qDebug() << "next!";
    if(m_base && m_current && m_current->next) {
        m_current = m_current->next;
    }
}

int List::length() const
{
    qDebug() << "length!";
    return m_count;
}

int List::currPos() const
{
    qDebug() << "currPos!";
    int position = 0;
    if(m_base && m_current) {
        Item * iterator = m_base;
        while(iterator != m_current) {
            iterator = iterator->next;
            ++position;
        }
        return position;
    }
    return -1;
}

void List::moveToPos(int pos)
{
    qDebug() << "moveToPos!";
    if (pos < length()) {
        Item * iterator = m_base;
        for (int i = 0; i < pos; i++) {
            iterator = iterator->next;
        }
        m_current = iterator;
    }
}

const int &List::getValue() const
{
    qDebug() << "getValue!";
    if(m_base) {
        return m_current->value;
    } else {
        return 0;
    }
}
