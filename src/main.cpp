#include <iostream>
#include "ListPriorityQueue.hh"
#include "DLinkedList.hh"
#include "DNode.hh"
#include "Elem.hh"
#include "Message.hh"
#include <chrono>
#include <thread>

//#include "ReadingFromFile.cpp"
void ReadingFromFile();

int main(){
    std::cout << "Początek programu!!\n";

    Message Text;

    Text.write();
    std::this_thread::sleep_for(std::chrono::nanoseconds(4000000000));
    Text.sent();
     std::this_thread::sleep_for(std::chrono::nanoseconds(4000000000));
    Text.read();

    std::string a = " ";
    std::cout << "Jesli chcesz posortowac wiadomość naciśnij 1 i enter.\n";
    std::cin >> a;
    if(a == "1")
     Text.sort();
    
    
}
