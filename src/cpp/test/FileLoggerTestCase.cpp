#include "FileLoggerTestCase.hpp"

#include <gas\test\FileLogger.hpp>

namespace gas{
namespace test{

FileLoggerTestCase::FileLoggerTestCase(Logger* logger): TestCase(logger){}

FileLoggerTestCase::~FileLoggerTestCase(){}

void FileLoggerTestCase::execute(){
    performLoggingAndCheckLoggedText();
}

void FileLoggerTestCase::performLoggingAndCheckLoggedText(){
    FileLogger logger("test.log");
    logger.print("hello world!");
    // @todo: delete test.log externaly
}

}
}