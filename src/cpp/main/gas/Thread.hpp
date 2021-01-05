#ifndef GAS_THREAD_HPP
#define GAS_THREAD_HPP

#include "Object.hpp"
#include "Task.hpp"

namespace gas{
    namespace impl{
        class ThreadImpl;
    }

    /**
     * @brief Class for working with threads
    */
    class Thread: public Object{
    private:
        Task* mTask;
        impl::ThreadImpl* mImpl;
    public:
        /**
         * @brief ctor
        */
        Thread();
        
        /**
         * @brief ctor with specifyed task
         * 
         * @param task object with executable method wich 
         * will be called after * start 
        */
        Thread(Task* task);

        /**
         * dtor
        */
        virtual ~Thread();

        /**
         * starting passed task in new thread
        */
        void start();

        /**
         * wait until thread finish his job
        */
        void join();

        /**
         * @brief main run cycle for thread
         * 
         * 
         * @todo try move this method to private if not
         * called anywhere
        */
        virtual void run();
    };
}

#endif