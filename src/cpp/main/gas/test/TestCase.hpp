#pragma once

#include "..\Object.hpp"

namespace gas{
    namespace test{
        class TestCase: public Object{
        public:
            virtual ~TestCase() = 0;
            virtual void execute() = 0;
        };
    }
}