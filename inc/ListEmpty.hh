#pragma once
#include "RuntimeException.hh"
/* 
    Exception that list is empty.
    I have gathered information
    about the code from "Data Structures And Algorithms in C++.
*/
class ListEmpty: public RuntimeException 
{ public:
    ListEmpty(const std::string& err) : RuntimeException(err) { } 
};