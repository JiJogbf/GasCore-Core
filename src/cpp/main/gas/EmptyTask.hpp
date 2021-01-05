#pragma once

#include "Task.hpp"

namespace gas{

/**
 * @brief Empty task with no real action's 
 * 
 * Use this when you want pass nullptr
*/
struct EmptyTask: public Task{
    void execute() override;
};

}
