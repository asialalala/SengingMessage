#include "ListPriorityQueue.hh"

template <typename E, typename T>
int ListPriorityQueue<E,T>::size() const
{return L.size();}

template <typename E, typename T>
bool ListPriorityQueue<E,T>::isEmpty() const
{
    return L.isEmpty();
}