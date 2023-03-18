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
    bool isEmpty() const;
    const T& front();// !!!!! throw
    void addFront(const T& e);
    void removeFront(); /// !!!!!! Zmień, eby zwracało wartość po usunięciu // !!!!! throw
};