// stack.h -- class definition for the stack ADT
// Created by zzls-cool
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
    enum { MAX = 10 };
    Item items[MAX];
    int top;
    int m_length;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
};
#endif