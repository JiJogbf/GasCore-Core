#include "Tester.hpp"

#include "NullLogger.hpp"

#include "SafeTestCase.hpp"

namespace gas{
namespace test{


Tester::Tester(Logger* logger): Object(), mLogger(logger){}

Tester::Tester(): Tester(new NullLogger()){
    if(mCases.capacity() <= 1){
        mCases.reserve(8);
    }
}

Tester::~Tester(){
    for(int i = 0; i < mCases.size(); i++){
        delete mCases[i];
        mCases[i] = nullptr;
    }
}

void Tester::add(TestCase* inCase){   
    mCases.push_back(new SafeTestCase(inCase, mLogger));
}

void Tester::run(){
    for(int i = 0; i < mCases.size(); i++){
        mCases[i]->execute();
    }
}

}
}