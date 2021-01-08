#pragma once

#include "TestCaseDecorator.hpp"

namespace gas{
    namespace test{

        /**
         * @brief Wrapper for Safe calls wich will catch
         * 
         * exception in execute method
         * 
         * Wrap origin Testcase if you afraid that 
         * execute can throw unexpected exception 
         * or stop execution in unpredicted way
        */
        class SafeTestCase: public TestCaseDecorator{
        public:
            SafeTestCase(TestCase* origin, Logger* logger);

            ~SafeTestCase() override;
        
            void execute() override;
        };
    }
}
