#pragma once

#include <vector>

#include "..\Object.hpp"
#include "..\Ptr.hpp"
#include "TestCase.hpp"

namespace gas{
    namespace test{
        class Tester: public Object{
        private:
            std::vector<TestCase*> mCases;
        public:
            Tester();
            ~Tester();
            void add(TestCase* inCase);
            void run();
        };
    }
}