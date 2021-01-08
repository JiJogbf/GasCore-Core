#pragma once 

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
    namespace test{
        class FileLoggerTestCase: public RichTestCase{
        public:
            FileLoggerTestCase(Logger* logger);
            void execute() override;
        public:
            void performLoggingAndCheckLoggedText();
        };
    }
}