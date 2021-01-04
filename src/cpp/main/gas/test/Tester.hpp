#pragma once

#include <vector>

#include "..\Object.hpp"
#include "..\Ptr.hpp"
#include "TestCase.hpp"
#include "Logger.hpp"

namespace gas{
    namespace test{
        class Tester: public Object{
        private:
            Logger* mLogger;
            std::vector<TestCase*> mCases;
        public:
            Tester();
            Tester(Logger* logger);
            ~Tester();
            void add(TestCase* inCase);
            void run();
        };
    }
}