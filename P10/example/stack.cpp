// Stack.cpp -- Stack member functions
// Created by zzls-cool
#include "stack.h"
#include <iostream>

Stack::Stack()
{
    top = 0;
    m_length = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if(top < MAX)
    {
        items[top++] = item;
        m_length++;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if(top > 0)
    {
        item = items[--top];
        --m_length;
        return true;
    }
    else
        return false;
}