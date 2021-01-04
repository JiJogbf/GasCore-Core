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
#include "ArrayTestCase.hpp"

#include <iostream>

namespace test{
    class MockTestCase: public gas::test::TestCase{
    public:
        MockTestCase();
        ~MockTestCase() override;
        void execute() override;
    };

    MockTestCase::MockTestCase(){}
    
    MockTestCase::~MockTestCase(){}
    
    void MockTestCase::execute(){
        std::cout << "MockTestCase.execute()" << std::endl;
    }

    struct Mock{
        int data;
        Mock(int data): data(data){
            std::cout << "Mock()" << std::endl;
        }
        
        ~Mock(){
            std::cout << "~Mock()" << std::endl;
        }
    };

    class MyTask: public gas::Task{
    public:
        void execute() override;
    };

    void MyTask::execute(){
        int i = 0; 
        int iterationsCount = 100;
        // std::cout << "Thread started" << std::endl;
        while (i < iterationsCount) {
            i++;
            // std::cout << "i = " << i << std::endl;
        }
        // std::cout << "Thread finished" << std::endl;
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

    void testRef(){
        Mock mock(228);
        gas::Ref<Mock> m(mock);
        std::cout << "testRef: pass" << std::endl;
    }

    void testArray(){
        gas::coll::Array<int> arr(10);
        arr.add(1).add(2).add(3);
    }

    void testTester(){
        gas::test::Tester tester;
        tester.add(new MockTestCase());
    }
}

void runOldTests(){
    using namespace test;
    testText();
    testPtr();
    testRef();
    testArray();
    testThread();
    testArrayList();
    testTester();
}

int main(int argc, char** argv){
    runOldTests();
 
    gas::test::Tester tester;
    tester.add(new gas::test::ArrayTestCase());
    tester.run();

    return 0;
}