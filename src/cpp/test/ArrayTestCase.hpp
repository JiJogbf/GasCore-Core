#pragma once

#include <gas\test\TestCase.hpp>

namespace gas{
    namespace test{
        class ArrayTestCase: public TestCase{
        public:
            ArrayTestCase();
            ~ArrayTestCase();
            void execute() override;
        };
    }
}