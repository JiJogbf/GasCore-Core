#include "ThreadImpl.hpp"

namespace gas{
    namespace impl{
        ThreadImpl::ThreadImpl(Task* task): mTaskRef(task){}

        ThreadImpl::~ThreadImpl(){
            mTaskRef = nullptr;
        }

        void ThreadImpl::run(){
            mTaskRef->execute();
        }
    }
}