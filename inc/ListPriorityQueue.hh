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
template <typename T>
class ListPriorityQueue
   // : public DLinkedList<T>
{
private:
    DLinkedList<T> L;
public:
    int size() const;
    bool isEmpty();
    const T& min() const
        throw(QueueEmpty);
    void insert(const T& e);
    T removeMin()
        throw(QueueEmpty); 
};

/*        METHODS          */

template <typename T>
int ListPriorityQueue<T>::size() const
{return L.size();}

template <typename T>
bool ListPriorityQueue<T>::isEmpty() 
{
    return L.isEmpty();
}

template <typename T>
void ListPriorityQueue<T>::insert(const T& e)
{
    DNode<T> * p = L.header;
    while (p->next != L.trailer && (e >= p->next->elem)) 
    {
        p=p->next;
    }
    L.add(p->next,e);

}

template <typename T>
const T&  ListPriorityQueue<T>::min() const 
{
    if(L.isEmpty())
        throw QueueEmpty("The queue has no any elements.\n");

    return L.front();
}

template <typename T>
T ListPriorityQueue<T>::removeMin()
{
    if(L.isEmpty())
        throw QueueEmpty("The queue has no any elements.\n");
    
    T t = min();
    L.removeFront();

    return t;
}