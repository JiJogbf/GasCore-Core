#include "Object.hpp"

#include "str\String.hpp"

namespace gas{
    Object::Object(){}

    Object::~Object(){}

    str::String* Object::toString(){
        return new gas::str::String("");
    }

    Object* Object::clone(){
        return new Object();
    }
}