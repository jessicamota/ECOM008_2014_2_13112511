#ifndef ITEM_H
#define ITEM_H

class Item {
public:
    int value;
    Item * next;
    Item(Item * next = 0) {
        this->next = next;
    }
    Item(const int& newValue, Item * next = 0) {
        this->value = newValue;
        this->next = next;
    }
};

#endif // ITEM_H
