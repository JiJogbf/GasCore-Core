#include "Object.hpp"

#include "str\Text.hpp"

namespace gas{
    Object::Object(){}

    Object::~Object(){}

    str::String* Object::toString(){
        return new gas::str::Text("");
    }

    Object* Object::clone(){
        return new Object();
    }
}