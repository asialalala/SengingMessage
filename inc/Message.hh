#include "DLinkedList.hh"
#include "Elem.hh"
#include <fstream> 

class Message
{
private:
    DLinkedList<Elem> * MessageText;

    void ReadingFromFile();
    void SendingToFile();
public:
  Message(){MessageText = new DLinkedList<Elem>;}
  ~Message() {delete MessageText;}
  void sent();
  void read();
  void sort();
  void write();

};

