#include "ListPriorityQueue.hh"

template <typename E, typename T>
int ListPriorityQueue<E,T>::size() const
{return L.size();}

template <typename E, typename T>
bool ListPriorityQueue<E,T>::isEmpty() const
{
    return L.isEmpty();
}

/*template <typename E, typename T>
void ListPriorityQueue::insert(const E& e)
{
    while (p!=L.)
    {
    //code
    }
    
}*/