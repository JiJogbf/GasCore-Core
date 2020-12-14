#ifndef GAS_THREAD_IMPL_HPP
#define GAS_THREAD_IMPL_HPP

#include "..\Task.hpp" 
#include "..\Object.hpp"

namespace gas{
    namespace impl{
        class ThreadImpl: public gas::Object{
        protected:
            Task* mTaskRef;
        public:
            ThreadImpl(Task* task);
            virtual ~ThreadImpl();
            virtual void run();
            virtual void join() = 0;
            virtual void start() = 0;
        };
    }
}

#endif 