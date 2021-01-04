#pragma once

#include <gas\Object.hpp>

#include <string>

namespace gas{
namespace test{

struct Logger: public Object{
public:
    virtual ~Logger() = 0;
    virtual Logger& print(const std::string& text) = 0;
};


}
}
