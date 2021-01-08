#pragma once

#include "..\str\String.hpp"

#include "TestCase.hpp"
#include "Logger.hpp"
#include "TestCaseState.hpp"

namespace gas{
namespace test{
    /**
     * @brief TestCase with logging and name.
     * 
     * 
     * For common cases inherit from this 
    */
    class RichTestCase: public TestCase{
    protected:
        std::string mName;
        Logger* mLogger;
        TestCaseState* mState;

        void changeState(TestCaseState* newState);
        void pass();
        void fail();
        void ignore();

    public:
        /**
         * @brief ctor
        */
        RichTestCase(const std::string& name, Logger* logger);

        /**
         * @brief dtor
        */
        ~RichTestCase();

        void execute() override;
    };
}
}
