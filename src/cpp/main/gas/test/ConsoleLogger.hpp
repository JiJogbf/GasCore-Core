#pragma once

#include "Logger.hpp"

#include <string>

namespace gas{
namespace test{

/**
 * @brief Console implementation for Logger interface.
 * 
 * Use print method for make output in log.
*/
struct ConsoleLogger: public Logger{
public:
    Logger& print(const std::string& text) override;
};

}
}
