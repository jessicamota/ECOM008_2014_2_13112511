#include <QCoreApplication>
#include <QDebug>
#include "List.h"
#include "Queue.h"
#include "Stack.h"

void t(const int * i) {
    qDebug() << *i;
}

int main()
{
//    Stack
    Stack * s = new Stack;
    qDebug() << s->length();

    int s1 = 1;
    s->push(s1);
    qDebug() << s->topValue();
    qDebug() << s->length();

    int s2 = 2;
    s->push(s2);
    qDebug() << s->topValue();
    qDebug() << s->length();

    qDebug() << s->pop();
    qDebug() << s->topValue();
    qDebug() << s->length();

    s->clear();
    qDebug() << s->length();


//    Queue
//    Queue * q = new Queue;
//    qDebug() << q->length();

//    int q1 = 1;
//    q->enqueue(q1);
//    qDebug() << q->length();

//    int q1 = 2;
//    q->enqueue(q1);
//    qDebug() << q->length();

//    q->dequeue();
//    qDebug() << q->length();

//    int q3 = 3;
//    q->enqueue(q3);
//    qDebug() << q->length();

//    List
//    List * l = new List;
//    qDebug() << l->currPos();

//    int l1 = 1;
//    l->insert(l1);
//    qDebug() << "value " << l->getValue();
//    qDebug() << l->currPos();

//    int l2 = 2;
//    l->insert(l2);
//    qDebug() << "value " << l->getValue();
//    qDebug() << l->currPos();

//    int l3 = 3;
//    l->insert(l3);
//    qDebug() << "value " << l->getValue();
//    qDebug() << l->currPos();

//    l->moveToStart();
//    qDebug() << "value " << l->getValue();
//    qDebug() << l->currPos();

//    int l4 = 4;
//    l->append(l4);
//    qDebug() << "value " << l->getValue();
//    qDebug() << l->currPos();

//    l->moveToEnd();
//    qDebug() << l->currPos();
//    qDebug() << l->length();

//    int l5 = 5;
//    l->append(l5);
//    qDebug() << "value " << l->getValue();
//    qDebug() << l->currPos();

//    l->moveToPos(2);
//    qDebug() << l->currPos();

//    l->clear();
//    qDebug() << l->currPos();
//    qDebug() << "value " << l->getValue();


    return 0;
}
