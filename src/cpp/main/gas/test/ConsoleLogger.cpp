#include "ConsoleLogger.hpp"

#include <iostream>

namespace gas{
namespace test{

Logger& ConsoleLogger::print(const std::string& text){
    std::cout << text << std::endl;
    return *this;
}

}
}
