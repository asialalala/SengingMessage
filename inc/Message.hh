#include "DLinkedList.hh"
#include "Elem.hh"
#include <fstream> 

class Message
{
private:
    DLinkedList<Elem> * MessageText;
    int Number; // number of words in MessageText

    void ReadingFromFileWithKey();
    void SendingToFileWithKey();
    void SendingToFile();
    void Random();

public:
  Message(){MessageText = new DLinkedList<Elem>;}
  ~Message() {delete MessageText;};
  void sent();
  void read();
  void write();
  void sort();
};

