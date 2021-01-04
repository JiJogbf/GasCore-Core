#include "NullLogger.hpp"

namespace gas{
namespace test{


NullLogger::NullLogger(){}

NullLogger::~NullLogger(){}

Logger& NullLogger::print(const std::string& text){ 
    return *this;
}


}
}


