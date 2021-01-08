#pragma once 

#include "..\Object.hpp"

#include <string>

namespace gas{
namespace test{
    
/**
 * @brief Base class for all test case states
 * 
*/
class TestCaseState: public Object{
private:
    std::string mName;
public:
    TestCaseState(const std::string& name);
    virtual ~TestCaseState();
    virtual std::string name();
};

}
}

