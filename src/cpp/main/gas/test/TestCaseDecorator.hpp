#pragma once

#include "TestCase.hpp"

namespace gas{
    namespace test{
        class TestCaseDecorator: public TestCase{
        private:
            TestCase* mOrigin;
        public:
            TestCaseDecorator(TestCase* origin);
            ~TestCaseDecorator() override;
            void execute() override;
        };
    }
}
