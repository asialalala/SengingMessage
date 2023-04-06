#include <iostream>
#include "ListPriorityQueue.hh"
#include "DLinkedList.hh"
#include "DNode.hh"
#include "Elem.hh"
#include "Message.hh"

//#include "ReadingFromFile.cpp"
void ReadingFromFile();

int main(){
    std::cout << "Początek programu!!\n";
  /*Elem a(1,"Witam");
    Elem b(2, "serdecznie");
    Elem c(3, "w");
    Elem d(4, "programie!");

    DLinkedList<Elem> list;
    list.addFront(a);
    list.addFront(b);
    list.addFront(c);
    list.addFront(d);
*/

// SORTOWANIE
    /* std::string info;
    for(int i=0;i<4;i++) {
        info = list.removeMin().getWord();
        std::cout << info;
       }*/
 

    Message Text;

    
    
    Text.write();
    Text.sent();
    Text.read();
    
    
}
