#pragma onece
#include <iostream>
#include "TLinkedList.hh"

/* 
    A priority gueue based on a single linked list. 
    I have gathered information
    about the code from "Data Structures And Algorithms in C++."
*/
template <typename E, typename T>
class ListPriorityQueue
{
private:
    TLinkedList<T> L;
    T isLess;
public:
    int size() const;
    bool isEmpty() const;
    const E& min() const; // !!!!! throw
    void insert(const E& e);
    void removeMin(); /// !!!!!! Zmień, eby zwracało wartość po usunięciu // !!!!! throw
};

