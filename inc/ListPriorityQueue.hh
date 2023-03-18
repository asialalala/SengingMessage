#pragma onece
#include <iostream>

/* 
    A priority gueue based on a single linked list. 
    I have gathered information
    about the code from "Data Structures And Algorithms in C++."
*/
template <typename E, typename C>
class ListPriorityQueue
{
private:
    
public:
    int size() const;
    bool isEmpty();
    const E& min() const;
    void insert(const E& e);
    void removeMin(); /// !!!!!! Zmień, eby zwracało wartość po usunięciu
};

