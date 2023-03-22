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
        throw(QueueEmpty); 
};

/*        METHODS          */

template <typename E, typename T>
int ListPriorityQueue<E,T>::size() const
{return L.size();}

template <typename E, typename T>
bool ListPriorityQueue<E,T>::isEmpty() const
{
    return L.isEmpty();
}

template <typename E, typename T>
void ListPriorityQueue<E,T>::insert(const E& e)
{
    DNode<T> * p = L.header;
    while (p->next != L.trailer && !isLess(e,p->elem)) //dowiedz sie jak dziala isLess
    {
        p=p->next;
    }
    L.add(p,e);
    
}