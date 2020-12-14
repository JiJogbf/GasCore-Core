#ifndef GAS_TASK_HPP_13122020_170000
#define GAS_TASK_HPP_13122020_170000

#include "Object.hpp"

namespace gas{
    struct Task: public Object{
        virtual void execute() = 0;
    };

    struct EmptyTask: public Task{
        void execute(){}
    };
}

#endif