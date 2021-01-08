#include "ThreadTestCase.hpp"

#include <gas\Thread.hpp>

namespace gas{
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

ThreadTestCase::ThreadTestCase(Logger* logger): RichTestCase("ThreadTestCase", logger){}

void ThreadTestCase::execute(){
    gas::Thread thread(new MyTask());
    thread.start();
    thread.join();
    RichTestCase::execute();
}

}
}

