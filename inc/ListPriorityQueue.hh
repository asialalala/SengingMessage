#pragma onece
#include <iostream>
#include "DLinkedList.hh"
#include "QueueEmpty.hh"
#define throw(...) // it has to be here to thro exeptions

/* 
    A priority gueue based on a single linked list. 
    I have gathered information
    about the code from "Data Structures And Algorithms in C++."
*/
template <typename E, typename T>
class ListPriorityQueue
{
private:
    DLinkedList<T> L;
    T isLess;
public:
    int size() const;
    bool isEmpty() const;
    const E& min() const
        throw(QueueEmpty);
    void insert(const E& e);
    E removeMin()
        throw(QueueEmpty); /// !!!!!! Zmień, eby zwracało wartość po usunięciu // !!!!! throw
};

