#include <gas/str/Text.hpp>
#include <gas/Ptr.hpp>
#include <gas/Ref.hpp>
#include <gas/Thread.hpp>
#include <gas/Task.hpp>
#include <gas/coll/ArrayList.hpp>
#include <iostream>

namespace test{
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
        std::cout << "Thread started" << std::endl;
        while (i < iterationsCount) {
            i++;
            std::cout << "i = " << i << std::endl;
        }
        std::cout << "Thread finished" << std::endl;
    }

    void testText(){
        gas::str::Text s = "hello world";
        std::cout << s.content() << std::endl;
    }

    void testPtr(){
        gas::Ptr<Mock> ptr(new Mock(12));
        gas::Ptr<Mock> newPtr = ptr;
    }

    void testThread(){
        gas::Thread thread(new MyTask());
        thread.start();
        thread.join();
    }

    void testArrayList(){
        gas::coll::ArrayList<gas::str::Text> list(4);
        list.add(new gas::str::Text("hello"));
        list.add(new gas::str::Text("world"));
        std::cout << "array-list sample start" << std::endl;
        for(int i = 0; i < list.count(); i++){
            std::cout << *list.get(i)->content() << std::endl;
        }
        std::cout << "array-list sample end" << std::endl;
    }

    void testRef(){
        Mock mock(228);
        gas::Ref<Mock> m(mock);
    }
}

int main(int argc, char** argv){
    using namespace test;
    testText();
    testPtr();
    testRef();
    testThread();
    testArrayList();
    return 0;
}