#pragma once
#include <iostream>
#include "TNode.hh"
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
    bool empty();
    const T& front();
    void addFront(const T& e);
    void removeFront();
};