#pragma once
#include <iostream>

class Elem
{
private:
    int key;
    std::string word;
public:
    Elem();
    Elem(int k, std::string w);
    ~Elem();
    bool operator <= ( const Elem & v ) const;
    bool operator >= ( const Elem & v ) const;
    std::string getWord();
};
