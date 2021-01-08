#include "TestCaseState.hpp"

namespace gas{
namespace test{

TestCaseState::TestCaseState(const std::string& name): Object(), mName(name){}

TestCaseState::~TestCaseState(){}

std::string TestCaseState::name(){
    return mName;
}

}
}


