#include "Message.hh"
#include "Elem.hh"
#include <cstdlib>
#include <string>

void Message::SendingToFile()
{
  std::ofstream File("filename.txt");

  // Write to the file
    while (!MessageText->isEmpty())
    {
        File << MessageText->removeFront().getWord();
        File << " ";
        File << MessageText->removeFront().getKey();
        File << "\n";
    }
    File << '\n';

  File.close();
}

void Message::ReadingFromFile()
{
std::string word;
int key;
std::string Skey;
std::ifstream ReadFile("filename.txt");

if (!ReadFile) {
        std::cout << "Unable to open file";
        exit(1); 
    }

//Elem newElem(2,"ja");
//MessageText->addFront(newElem);


while (getline (ReadFile, word, ' ')) {
  getline(ReadFile, Skey, '\n');

std::cout << "przeczytane słowo: ";
std::cout << word << std::endl; 

//int key = atoi(Skey.c_str()); 

  int key = stoi(Skey); // convert string to int

  Elem * newElem = new Elem(key,word); // add new element 
  MessageText->addFront(* newElem);
  std::cout << "newElem: " << newElem->getWord() << std::endl;

  std::cout << "MessageTezt: " << MessageText->front().getWord() << std::endl;
}

ReadFile.close();
}

void Message::sent()
{
  SendingToFile();
}

void Message::read()
{
  ReadingFromFile();
}

