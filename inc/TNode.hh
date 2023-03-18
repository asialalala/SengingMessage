#pragma once
#include <iostream>

/*
    A template of single linked list's node.
    I have gathered information
    about the code from "Data Structures And Algorithms in C++."
*/

template <typename> class TLinkedList;

template <typename T>
class TNode
{
private:
    T elem;
    TNode<T>* next;
    friend class TLinkedList<T>;
};