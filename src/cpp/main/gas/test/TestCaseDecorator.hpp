#pragma once

#include "TestCase.hpp"

namespace gas{
    namespace test{
        class TestCaseDecorator: public TestCase{
        private:
            TestCase* mOrigin;
        public:
            TestCaseDecorator(TestCase* origin, Logger* logger);
            ~TestCaseDecorator() override;
            void execute() override;
        };
    }
}
