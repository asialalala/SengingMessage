#include "Elem.hh"


bool Elem::operator <= ( const Elem & v ) const
{
    if( key <= v.key  )
         return true;
    else
         return false;
    
}

bool Elem::operator >= ( const Elem & v ) const
{
    if( key >= v.key  )
         return true;
    else
         return false;
    
}


Elem::Elem()
{
      key = 0;
      word = ' ';
}

Elem::Elem(int k, std::string w) 
{
    key = k;
    word = w;
}

Elem::~Elem()
{
}

std::string Elem::getWord() const
{return word;}
