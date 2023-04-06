#include "Message.hh"
#include "Elem.hh"
#include <cstdlib>
#include <string>
#include "DNode.hh"

/*!
It writes MessageText to file in form which is possible to reread
*/
void Message::SendingToFile()
{
  Elem tem;
  std::ofstream File("filename.txt");

  // Write to the file
    while (!MessageText->isEmpty())
    {
      tem = MessageText->removeFront();
        File << tem.getWord();
        File << " ";
        File << tem.getKey();
        File << "\n";
    }
    File << '\n';

  File.close();
  //std::cout << "Oprozniono";
}

/*!
It reads file which are written in special form whith keys
*/
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

while (getline (ReadFile, word, ' ')) { //set word
  getline(ReadFile, Skey, '\n'); // set key
  int key = stoi(Skey); // convert string to int

  Elem * newElem = new Elem(key,word); // add new element 
  MessageText->addFront(* newElem);

  std::cout << std::endl << MessageText->front().getWord() << std::endl;
  newElem = NULL;
  delete newElem;
}


ReadFile.close();
}

/*!
It realisates sending message to file :
1. random sending message in special form with keys 
2. reading to the message (it is mixed)
3. writing only words from the message
*/
void Message::sent()
{
  Random();
  SendingToFile();
}

// now it is unneccessary
void Message::read()
{
  ReadingFromFile();
}

/*!
chce zeby otwieralo plik i umozliwialo pisanie w nim !!!!!!!!!!!
It allowes to read normal message from file
*/
// dziala poprawnie tylko jesli ktos nie da gdzie skilkukrotnej spacji:( lub kilka \n
void Message::write()
{
  std::ifstream File("filename.txt"); //open file
  if (!File) {
        std::cout << "Unable to open file";
        exit(1); 
    }

  std::cout << "pobrane" << std::endl;
  std::string word;
  int key = 1; 
  while (File.good()) { 
  getline (File, word, ' ' ); //set word
  if(word == "\n")
    break;
  Elem * newElem = new Elem(key,word); // add new element 
  MessageText->addFront(* newElem);
  //std::cout << word;
  std::cout <<  MessageText->front().getWord();
  key++;
  newElem = NULL;
  delete newElem;
  }
  File.close();
  Number = key - 1;
  std::cout << Number;
}


void Message::Random()
{
  if (MessageText->isEmpty())
  {
    std::cout << "There is nothing to randomise.\n";
  }
  else
  {
    int r = rand()%2;
    for(int i = 1; i <= Number; i++)
    {
      if(r)
      MessageText->addFront(MessageText->removeBack());
      r = rand()%2;
    }
  }
}


