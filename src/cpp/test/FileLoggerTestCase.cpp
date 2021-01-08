#include "FileLoggerTestCase.hpp"

#include <gas\test\FileLogger.hpp>

namespace gas{
namespace test{

FileLoggerTestCase::FileLoggerTestCase(Logger* logger): RichTestCase("FileLoggerTestCase", logger){}

void FileLoggerTestCase::execute(){
    performLoggingAndCheckLoggedText();
    RichTestCase::execute();
}

void FileLoggerTestCase::performLoggingAndCheckLoggedText(){
    FileLogger logger("test.log");
    logger.print("hello world!");
    // @todo: delete test.log externaly
}

}
}