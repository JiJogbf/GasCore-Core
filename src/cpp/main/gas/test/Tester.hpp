#pragma once

#include <vector>

#include "..\Object.hpp"
#include "..\Ptr.hpp"
#include "TestCase.hpp"
#include "Logger.hpp"

namespace gas{
    namespace test{
    
        /**
         * @brief Object for running test cases passed via add method
         * 
         * To work with this class create instance this object, pass 
         * desirable logger (if needed), then pass some testcases and 
         * after all call run method
        */
        class Tester: public Object{
        private:
            Logger* mLogger;
            std::vector<TestCase*> mCases;
        public:
            /**
             * @brief ctor
            */
            Tester();

            /**
             * @brief ctor with param 
             * 
             * @param logger this logger wil be used for output of tester
            */
            Tester(Logger* logger);

            /**
             * @brief dtor
             */
            ~Tester(); 

            /**
             * @brief Adding test case to list of execution
             * 
             * @param inCase test case object
            */
            void add(TestCase* inCase);
            
            /**
             * @brief Running all added testcases
            */
            void run();
        };
    }
}