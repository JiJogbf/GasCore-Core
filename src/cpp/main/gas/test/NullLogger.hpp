#pragma once 

#include <string>

#include "Logger.hpp"

namespace gas{
namespace test{

class NullLogger: public Logger{
public:
    NullLogger();
    ~NullLogger();
    Logger& print(const std::string& text) override;
};

}
}
