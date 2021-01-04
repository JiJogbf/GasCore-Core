#include "ArrayTestCase.hpp"

#include <cassert>
#include <iostream>

#include <gas\coll\Array.hpp>

namespace gas{
namespace test{


ArrayTestCase::ArrayTestCase(Logger* logger): TestCase(logger){}

ArrayTestCase::~ArrayTestCase(){}

void ArrayTestCase::execute(){
    creatingArrayStaticaly();    
    appendingElementsToArray();
    appendingRangeElements();
}

void ArrayTestCase::creatingArrayStaticaly(){
    gas::coll::Array<int> intArray(10);
    assert(intArray.capacity() == 10 && "creatingArrayStaticaly: Capacity have unexpected value!");
    mLogger->print("creatingArrayStaticaly: pass");      
}
    
void ArrayTestCase::appendingElementsToArray(){
    gas::coll::Array<int> array(10);
    array.add(1).add(2).add(3).add(4);  
    assert(array.length() == 4 && "appendingElementsToArray: lenght has unexpected value!");
    mLogger->print("appendingElementsToArray: pass");      
}

void ArrayTestCase::appendingRangeElements(){
    gas::coll::Array<int> array(4);
    array.add(1).add(2).add(3).add(4);  
    gas::coll::Array<int> subArray(12);
    subArray.add(array);
    assert(subArray.length() == 4 && "appendingRangeElements: lenght has unexpected value!");
    mLogger->print("appendingRangeElements: pass");      
}

}
}