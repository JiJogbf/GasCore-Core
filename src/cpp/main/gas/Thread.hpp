#ifndef GAS_THREAD_HPP
#define GAS_THREAD_HPP

#include "Object.hpp"
#include "Task.hpp"

namespace gas{
    namespace impl{
        class ThreadImpl;
    }

    class Thread: public Object{
    private:
        Task* mTask;
        impl::ThreadImpl* mImpl;
    public:
        Thread();
        Thread(Task* task);
        virtual ~Thread();
        void start();
        void join();
        virtual void run();
    };
}

#endif