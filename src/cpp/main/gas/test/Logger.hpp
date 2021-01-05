#pragma once

#include <gas\Object.hpp>

#include <string>

namespace gas{
namespace test{

/**
 * @brief Base interface for making logs in Tester  and TestCase 's
 * 
 * Use print method for make output in log.
*/
struct Logger: public Object{
public:
    virtual ~Logger() = 0;
    virtual Logger& print(const std::string& text) = 0;
};

}
}
