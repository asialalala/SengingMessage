#pragma once
#include <iostream>
#include "DNode.hh"
#include "ListEmpty.hh"
#define throw(...) // it has to be here to thro exeptions

/*
    Template of single linked list.
    I have gathered information
    about the code from "Data Structures And Algorithms in C++.
*/

template <typename T>
class DLinkedList
{
private:
   DNode<T> * header;
   DNode<T> * trailer;

public:
    DLinkedList();
    ~DLinkedList();
    void addFront(const T & e);
    void addBack(const T & e);
    void removeFront()
        throw(ListEmpty);
    void removeBack()
        throw(ListEmpty);
    const T & front()
        throw(ListEmpty);
    const T & back()
        throw(ListEmpty);
    bool isEmpty();

protected:
    void add(DNode<T> * v, const T & e);
    void remove(DNode<T> * v);
};


