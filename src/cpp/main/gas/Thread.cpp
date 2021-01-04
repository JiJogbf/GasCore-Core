#include "Thread.hpp"

#include "impl\ThreadImpl.hpp"
#include "impl\WinThreadImpl.hpp"

namespace gas{
    Thread::Thread(): Thread(new EmptyTask()) {}

    Thread::Thread(Task* task): Object(), 
            mTask(task), 
            mImpl(nullptr)
    {
        if(mTask == nullptr){
            mTask = new EmptyTask();
        }
        // @todo #6 adding platform specific defines here
        mImpl = new impl::win::WinThreadImpl(mTask);
    }

    Thread::~Thread(){
        delete mImpl;
        delete mTask;
    }
    
    void Thread::start(){
        mImpl->start();
    }   

    void Thread::join(){
        mImpl->join();
    }       

    void Thread::run(){
        mImpl->run();
    }
}
