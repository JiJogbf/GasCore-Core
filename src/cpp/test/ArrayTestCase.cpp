#include "ArrayTestCase.hpp"

#include <gas\coll\Array.hpp>

namespace gas{
namespace test{

ArrayTestCase::ArrayTestCase(): TestCase(){}

ArrayTestCase::~ArrayTestCase(){}

void ArrayTestCase::execute(){
    creatingArrayStaticaly();    
}

void ArrayTestCase::creatingArrayStaticaly(){
    gas::coll::Array<int> intArray(10);
    /*@ todo: #2 implementing this test case.
                 wich will operate with array 
                 of primitive types */
}
    
}
}