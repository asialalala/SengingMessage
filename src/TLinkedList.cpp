#include "TLinkedList.hh"

template<typename T>
TLinkedList<T>::TLinkedList()
: head(NULL)
{
}

template<typename T>
TLinkedList<T>::~TLinkedList()
{
    while(!empty())
    {
        removeFront();
    }
}