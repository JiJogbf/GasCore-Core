#include "RichTestCase.hpp"

#include <gas\str\Text.hpp>

namespace gas{
namespace test{

class NewState: public TestCaseState{
public:
    NewState(): TestCaseState("new"){}
};

class IgnoredState: public TestCaseState{
public:
    IgnoredState(): TestCaseState("ignored"){}
};

class FailedState: public TestCaseState{
public:
    FailedState(): TestCaseState("failed"){}
};

class PassState: public TestCaseState{
public:
    PassState(): TestCaseState("pass"){}
};


RichTestCase::RichTestCase(const std::string& name, Logger* logger):
    mName(name), mLogger(logger), mState(new NewState())
{}

RichTestCase::~RichTestCase(){
    mLogger = nullptr;
}

void RichTestCase::changeState(TestCaseState* newState){
    if(mState != nullptr){
        delete mState;
    }
    mState = newState;
}

void RichTestCase::pass(){
    changeState(new PassState());
}

void RichTestCase::fail(){
    changeState(new FailedState());
}

void RichTestCase::ignore(){
    changeState(new IgnoredState());
}

void RichTestCase::execute(){
    mLogger->print(mName + ": " + mState->name());
}


}
}