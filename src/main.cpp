#include <iostream>
#include "ListPriorityQueue.hh"
#include "DLinkedList.hh"
#include "DNode.hh"
#include "Elem.hh"

int main(){
    std::cout << "Początek programu!!\n";
    Elem a(1,"Witam");
    Elem b(2, "serdecznie");
    Elem c(3, "w");
    Elem d(4, "programie!");

    ListPriorityQueue<Elem> list;
    list.insert(c);
    list.insert(b);
    list.insert(d);
    list.insert(a);

     std::string info;
    for(int i=0;i<4;i++) {
        info = list.removeMin().getWord();
        std::cout << info;
       }

 
}
