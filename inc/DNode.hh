#pragma once
#include <iostream>

/*
    A template of single linked list's node.
    I have gathered information
    about the code from "Data Structures And Algorithms in C++."
*/

template <typename> class DLinkedList;

template <typename T>
class DNode
{
private:
    T elem;
    DNode * prev;
    DNode * next;
    friend class DLinkedList<T>;
};

