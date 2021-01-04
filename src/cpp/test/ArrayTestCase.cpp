#include "ArrayTestCase.hpp"

#include <cassert>
#include <iostream>

#include <gas\coll\Array.hpp>

namespace gas{
namespace test{


ArrayTestCase::ArrayTestCase(): TestCase(){}

ArrayTestCase::~ArrayTestCase(){}

void ArrayTestCase::execute(){
    creatingArrayStaticaly();    
    appendingElementsToArray();
    appendingRangeElements();
}

void ArrayTestCase::creatingArrayStaticaly(){
    gas::coll::Array<int> intArray(10);
    assert(intArray.capacity() == 10 && "creatingArrayStaticaly: Capacity have unexpected value!");
    /*@ todo: #2 implementing this test case.
                 wich will operate with array 
                 of primitive types */
    std::cout << "creatingArrayStaticaly: pass" << std::endl;            
}
    
void ArrayTestCase::appendingElementsToArray(){
    gas::coll::Array<int> array(10);
    array.add(1).add(2).add(3).add(4);  
    assert(array.length() == 4 && "appendingElementsToArray: lenght has unexpected value!");
    std::cout << "appendingElementsToArray: pass" << std::endl;
}

void ArrayTestCase::appendingRangeElements(){
    gas::coll::Array<int> array(4);
    array.add(1).add(2).add(3).add(4);  
    gas::coll::Array<int> subArray(12);
    subArray.add(array);
    assert(subArray.length() == 4 && "appendingRangeElements: lenght has unexpected value!");
    std::cout << "appendingRangeElements: pass" << std::endl;
}

}
}