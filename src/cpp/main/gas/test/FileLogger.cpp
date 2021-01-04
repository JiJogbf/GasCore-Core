#include "FileLogger.hpp"

namespace gas{
namespace test{

// @todo: #5 change stream logic latter 

FileLogger::FileLogger(const char* file): mFilename(file), mStream(mFilename){}

FileLogger::~FileLogger(){
    mStream.close();
}

Logger& FileLogger::print(const std::string& text){
    mStream << text << std::endl;
    return *this;
}

}
}
