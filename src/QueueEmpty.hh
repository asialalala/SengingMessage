#include "RuntimeException.hh"
/* Exception */
class QueueEmpty : public RuntimeException 
{ public:
    QueueEmpty(const std::string& err) : RuntimeException(err) { } 
};