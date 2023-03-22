#include <iostream>
#include "ListPriorityQueue.hh"
#include "DLinkedList.hh"
#include "DNode.hh"
#include "nowa.hh"

int main(){
    std::cout << "Początek programu!!\n";
    ListPriorityQueue<int,int> a;
   
   a.insert(2);
   std::cout << a.min();
 

}
