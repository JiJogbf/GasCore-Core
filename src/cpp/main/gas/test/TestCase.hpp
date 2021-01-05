#pragma once

#include "..\Object.hpp"
#include "Logger.hpp"

namespace gas{
    namespace test{
        /**
         * @brief Base class for all test case's.
         * 
         * Used in Tester class. 
         * 
         * Inherit you test case from this class and implement execute
         * method in derived instance.
         * 
         * Then pass this instance in add method of Tester class.
         * 
         * If you wana use logger you should first create it outside
         * and pass it in ctor
        */
        class TestCase: public Object{
        protected:
            Logger* mLogger;
        public:
            /**
             * @brief ctor
            */
            TestCase(Logger* logger);

            /**
             * @brief dtor
            */
            virtual ~TestCase() = 0;
            
            /**
             * @brief main test case enty point.
             * 
             * You should implement it in derived testcase
            */
            virtual void execute() = 0;
        };
    }
}