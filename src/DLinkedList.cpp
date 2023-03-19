#include "DLinkedList.hh"

// dodaj wyjątki do front, back, remove, removeFront, removeBack

template <typename T>
DLinkedList<T>::DLinkedList()
{
    header = new DNode<T>;
    trailer = new DNode<T>;
    header->next = trailer;
    trailer->prev = header;

}

template <typename T>
DLinkedList<T>::~DLinkedList()
{
    while(!isEmpty())
        removeFront();
    delete header;
    delete trailer;
}

template <typename T>
bool DLinkedList<T>::isEmpty()
{
    return header->next == trailer;
}

template <typename T>
const T & DLinkedList<T>::front()
{
    if(isEmpty)
    throw ListEmpty("The list has no any elements.\n");

    return header->next->elem;
}

template <typename T>
const T & DLinkedList<T>::back()
{
    if(isEmpty)
    throw ListEmpty("The list has no any elements.\n");

    return trailer->prev->elem;
}

template <typename T>
void DLinkedList<T>::add(DNode<T> * v, const T & e)
{
    DNode<T> * u = new DNode<T>;
    u->elem = e;
    u->next = v;
    u->prev = v->prev;
    v->prev->next = v->prev = u;
}

template <typename T>
void DLinkedList<T>::addFront(const T & e)
{
    add(header->next, e);
}

template <typename T>
void DLinkedList<T>::addBack(const T & e)
{
    add(trailer, e);
}

template <typename T>
void DLinkedList<T>::remove(DNode<T> * v)
{
    if(isEmpty)
    throw ListEmpty("The list has no any elements.\n");

    DNode<T> * u = v->prev;
    DNode<T> * w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
}

template <typename T>
void DLinkedList<T>::removeFront()
{
    if(isEmpty)
    throw ListEmpty("The list has no any elements.\n");

    remove(header->next);
}

template <typename T>
void DLinkedList<T>::removeBack()
{
    if(isEmpty)
    throw ListEmpty("The list has no any elements.\n");
    
    remove(trailer->prev);
}