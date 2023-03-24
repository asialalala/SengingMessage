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
    : public DLinkedList<T>
{
private:
    DLinkedList<T> L;
public:
    int size() const;
    bool isEmpty();
    const T& min() const
        throw(QueueEmpty);
    void insert(const E& e);
    E removeMin()
        throw(QueueEmpty); 
};

/*        METHODS          */

template <typename E, typename T>
int ListPriorityQueue<E,T>::size() const
{return L.size();}

template <typename E, typename T>
bool ListPriorityQueue<E,T>::isEmpty() 
{
    return L.isEmpty();
}

template <typename E, typename T>
void ListPriorityQueue<E,T>::insert(const E& e)
{
    DNode<T> * p = L.header;
    while (p->next != L.trailer && (e <= p->elem)) 
    {

        p=p->next;
    }
    L.add(p->next,e);
    
}

template <typename E, typename T>
const T&  ListPriorityQueue<E,T>::min() const 
{
    if(L.isEmpty())
        throw QueueEmpty("The queue has no any elements.\n");

    return L.front();
}