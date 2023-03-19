#pragma once
#include <iostream>
#include "TNode.hh"
#include "ListEmpty.hh"
#define throw(...) // it has to be here to thro exeptions

// USUN GDY ZAMIENISZ NA DOUBLE LIST

/*
    Template of single linked list.
    I have gathered information
    about the code from "Data Structures And Algorithms in C++.
*/
template <typename T>
class TLinkedList
{
private:
    TNode<T> * head;
public:
    TLinkedList();
    ~TLinkedList();
    bool isEmpty() const;
    const T& front()
        throw(ListEmpty);
    void addFront(const T& e);
    T removeFront()
        throw(ListEmpty); 
};