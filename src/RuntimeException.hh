#include <iostream>

/* Generic exceptation class */

class RuntimeException
{
private:
    std::string errorMsg; // error message
public:
    RuntimeException(const std::string & err) {errorMsg = err;} // writing the error message
    std::string getMessage(){return errorMsg;} // acces to the error message
};

