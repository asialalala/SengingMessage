#include "Message.hh"
#include "Elem.hh"
#include <cstdlib>
#include <string>
#include "DNode.hh"
#include "ListPriorityQueue.hh"


/*!
It writes MessageText to file in form which is possible to reread
*/
void Message::SendingToFileWithKey()
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

  File.close();

}

/*!
It writes MessageText to file, onlu words
*/
void Message::SendingToFile()
{
  std::ofstream File("filename.txt");
  DNode<Elem> * tem = MessageText->header;
  // Write to the file
    while (tem != MessageText->trailer)
    {
        File << tem->elem.getWord();
        File << " ";
        tem = tem->next;
    }
   // File << '\n';

  File.close();
}



/*!
It reads file which are written in special form whith keys
*/
void Message::ReadingFromFileWithKey()
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

  //std::cout << std::endl << MessageText->front().getWord() << std::endl;
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
  SendingToFileWithKey(); 
}

// now it is unneccessary
void Message::read()
{
  ReadingFromFileWithKey();
  SendingToFile(); // show the message the user
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

  std::string word;
  int key = 1; 

  while (File.good()) { 
  getline (File, word, ' ' ); //set word
  if(word == "\n")
    break;
  Elem * newElem = new Elem(key,word); // add new element 
  MessageText->addFront(* newElem);
  key++;
  newElem = NULL;
  delete newElem;
  }
  
  File.close();
  Number = key - 1;
}

/*!
looking form back and additon last elemonts on from by random
*/
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

/*!
It sorts the packages with words.
*/
void Message::sort()
{
  ListPriorityQueue<Elem> Priority; 
  Elem tem;

  while (!MessageText->isEmpty())
  {
    Priority.insert(MessageText->removeFront());
  }
  
  while (!Priority.isEmpty())
  {
    tem = Priority.removeMin();
    MessageText->addBack(tem);
  }
  SendingToFile(); // show the message the user
}
