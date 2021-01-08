#include <gas/str/Text.hpp>
#include <gas/Ptr.hpp>
#include <gas/Ref.hpp>
#include <gas/Thread.hpp>
#include <gas/Task.hpp>
#include <gas/coll/ArrayList.hpp>
#include <gas/coll/Array.hpp>
#include <gas/test/Tester.hpp>
#include <gas/test/TestCase.hpp>
#include <gas/test/TestCaseDecorator.hpp>
#include <gas/test/Logger.hpp>
#include <gas/test/FileLogger.hpp>
#include "ArrayTestCase.hpp"
#include "FileLoggerTestCase.hpp"

#include "MockTestCase.hpp"
#include "RefTestCase.hpp"

#include "Mock.hpp"

#include <iostream>

namespace test{
    class MyTask: public gas::Task{
        // @todo: adding logger
    public:
        void execute() override;
    };

    void MyTask::execute(){
        int i = 0; 
        int iterationsCount = 100;
        while (i < iterationsCount) {
            i++;
        }
    }

    void testText(){
        gas::str::Text s = "hello world";
        std::cout << s.content() << std::endl;
        std::cout << "testText: pass" << std::endl;
    }

    void testPtr(){
        gas::Ptr<Mock> ptr(new Mock(12));
        gas::Ptr<Mock> newPtr = ptr;
        std::cout << "testPtr: pass" << std::endl;
    }

    void testThread(){
        gas::Thread thread(new MyTask());
        thread.start();
        thread.join();
        std::cout << "testThread: pass" << std::endl;
    }

    void testArrayList(){
        gas::coll::ArrayList<gas::str::Text> list(4);
        list.add(new gas::str::Text("hello"));
        list.add(new gas::str::Text("world"));
        for(int i = 0; i < list.count(); i++){
            std::cout << *list.get(i)->content() << std::endl;
        }
        std::cout << "testArrayList: pass" << std::endl;
    }
}

void runOldTests(){
    using namespace test;
    testText();
    testPtr();
    testThread();
    testArrayList();
}

int main(int argc, char** argv){
    runOldTests();
 
    gas::test::Logger* logger = new gas::test::FileLogger("result.log");
    gas::test::Tester tester(logger);
    tester.add(new gas::test::MockTestCase(logger));
    tester.add(new gas::test::ArrayTestCase(logger));
    tester.add(new gas::test::FileLoggerTestCase(logger));
    tester.add(new gas::test::RefTestCase(logger));
    tester.run();

    return 0;
}