#pragma once
#include <iostream>

/*
    A template of single linked list's node.
    I have gathered information
    about the code from "Data Structures And Algorithms in C++."
*/


template <typename T>
class DNode
{
public:
    T elem;
    DNode * prev;
    DNode * next;
};

