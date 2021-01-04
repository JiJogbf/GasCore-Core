#pragma once

#include "..\Object.hpp"
#include "Logger.hpp"

namespace gas{
    namespace test{
        class TestCase: public Object{
        protected:
            Logger* mLogger;
        public:
            TestCase(Logger* logger);
            virtual ~TestCase() = 0;
            virtual void execute() = 0;
        };
    }
}