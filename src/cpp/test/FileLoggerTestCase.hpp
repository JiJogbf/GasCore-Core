#pragma once 

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
    namespace test{
        class FileLoggerTestCase: public TestCase{
        public:
            FileLoggerTestCase(Logger* logger);
            ~FileLoggerTestCase();
            void execute() override;
        public:
            void performLoggingAndCheckLoggedText();
            /* @todo: #1 future tests - add new tests to testcase */
            // void creatingArrayInHeap();
            // void appendingElementsToArray();
            // void retriveElementsFromArray();
        };
    }
}