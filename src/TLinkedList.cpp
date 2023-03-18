#include "TLinkedList.hh"

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
     if(isEmpty)
    throw ListEmpty("The list has no any elements.\n");
    
    TNode<T>* old = head;
    T temp = old.elem;
    head = old->next;
    delete old;
    return temp;
}