#pragma once

#include "TestCase.hpp"

namespace gas{
    namespace test{

        /**
         * Decorator for TestCase.
         * 
         * Use when you need customize 
         * existed casses with new logic
        */
        class TestCaseDecorator: public TestCase{
        private:
            TestCase* mOrigin;
        public:
            /**
             * ctor
             * 
             * @param origin wrapped TestCase
             * @param logger used logger
            */
            TestCaseDecorator(TestCase* origin, Logger* logger);

            /**
             * dtor
            */
            ~TestCaseDecorator() override;
            /**
             * entry point of test case
            */
            void execute() override;
        };
    }
}
