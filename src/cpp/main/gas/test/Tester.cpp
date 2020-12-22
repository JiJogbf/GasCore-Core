#include "Tester.hpp"

namespace gas{
namespace test{

Tester::Tester(): Object(), mCases(){
    if(mCases.capacity() <= 1){
        mCases.reserve(8);
    }
}

Tester::~Tester(){
    for(int i = 0; i < mCases.size(); i++){
        TestCase* c = mCases[i];
        delete c;
        mCases[i] = nullptr;
    }
}

void Tester::add(TestCase* inCase){
    mCases.push_back(inCase);
}

void Tester::run(){
    for(int i = 0; i < mCases.size(); i++){
        TestCase* p = mCases[i];
        p->execute();
    }
}

}
}