#include "ListPriorityQueue.hh"

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