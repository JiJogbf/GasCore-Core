#include <gas/test/Tester.hpp>
#include <gas/test/TestCase.hpp>
#include <gas/test/Logger.hpp>
#include <gas/test/ConsoleLogger.hpp>

#include "FileLoggerTestCase.hpp"
#include "MockTestCase.hpp"
#include "RefTestCase.hpp"
#include "PtrTestCase.hpp"
#include "ThreadTestCase.hpp"
#include "ArrayTestCase.hpp"
#include "ArrayListTestCase.hpp"
#include "TextTestCase.hpp"

#include <iostream>

int main(int argc, char** argv){
    gas::test::Logger* logger = new gas::test::ConsoleLogger();
    gas::test::Tester tester(logger);
    tester.add(new gas::test::MockTestCase(logger));
    tester.add(new gas::test::FileLoggerTestCase(logger));
    tester.add(new gas::test::RefTestCase(logger));
    tester.add(new gas::test::PtrTestCase(logger));
    tester.add(new gas::test::ThreadTestCase(logger));
    tester.add(new gas::test::ArrayTestCase(logger));
    tester.add(new gas::test::ArrayListTestCase(logger));
    tester.add(new gas::test::TextTestCase(logger));

    tester.run();

    return 0;
}