#pragma once
#include "RuntimeException.hh"
/* 
    Exception that queue is empty.
    I have gathered information
    about the code from "Data Structures And Algorithms in C++.
*/
class QueueEmpty : public RuntimeException 
{ public:
    QueueEmpty(const std::string& err) : RuntimeException(err) { } 
};