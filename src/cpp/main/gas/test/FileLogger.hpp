#pragma once

#include <fstream>
#include <string>

#include "Logger.hpp"

namespace gas{
namespace test{

/**
 * @brief File logger.
 * 
 * Perform its output in specified filename
 * 
 * Use print method for make output in log.
*/
class FileLogger: public Logger{
private:
    std::string mFilename;
    std::ofstream mStream;
public:
    /**
     * @param file path to file with logger content
    */
    FileLogger(const char* file);
    ~FileLogger() override;
    Logger& print(const std::string& text) override;
};

}
}