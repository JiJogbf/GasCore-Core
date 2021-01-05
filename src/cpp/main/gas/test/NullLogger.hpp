#pragma once 

#include <string>

#include "Logger.hpp"

namespace gas{
namespace test{

/**
 * @brief Empty implementation of Logger interface
 * 
 * Use it when you not want pass nullptr where we expect Logger*
*/
class NullLogger: public Logger{
public:
    NullLogger();
    ~NullLogger();
    Logger& print(const std::string& text) override;
};

}
}
