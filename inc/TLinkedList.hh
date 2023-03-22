#pragma once
#include <iostream>
#include "TNode.hh"
#include "ListEmpty.hh"
#define throw(...) // it has to be here to thro exeptions

// USUN GDY ZAMIENISZ NA DOUBLE LIST

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
    const T& front()
        throw(ListEmpty);
    void addFront(const T& e);
    T removeFront()
        throw(ListEmpty); 
};


/*     METHODS    */

template<typename T>
TLinkedList<T>::TLinkedList()
: head(NULL)
{
}

template<typename T>
TLinkedList<T>::~TLinkedList()
{
    while(!isEmpty())
    {
        removeFront();
    }
}

template<typename T>
bool TLinkedList<T>::isEmpty() const
{
    return head == NULL;
}

template<typename T>
const T& TLinkedList<T>::front()
{
    if(isEmpty)
        throw ListEmpty("The list has no any elements.\n");
    return head->elem;
}

template<typename T>
void TLinkedList<T>::addFront(const T& e)
{
    TNode<T> * s = new TNode<T>;
    s->elem = e;
    s->next = head;
    head = s; 
}

template<typename T>
T TLinkedList<T>::removeFront()
{
    if(isEmpty())
        throw ListEmpty("The list has no any elements.\n");
    
    TNode<T>* old = head;
    T temp = old->elem;
    head = old->next;
    delete old;
    return temp;
}