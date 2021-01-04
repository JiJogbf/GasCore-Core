#pragma once

#include <fstream>
#include <string>

#include "Logger.hpp"

namespace gas{
namespace test{

class FileLogger: public Logger{
private:
    std::string mFilename;
    std::ofstream mStream;
public:
    FileLogger(const char* file);
    ~FileLogger() override;
    Logger& print(const std::string& text) override;
};

}
}