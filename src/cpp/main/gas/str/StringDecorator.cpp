#include "StringDecorator.hpp"

#include "Text.hpp"

namespace gas{
namespace str{

StringDecorator::StringDecorator(String* origin): String(), mOrigin(origin){
    if(origin == nullptr){
        mOrigin = new Text("");
    }
}

StringDecorator::~StringDecorator(){
    delete mOrigin;
}

int StringDecorator::length() const{
    return mOrigin->length();
}

char_p StringDecorator::content() const {
    return mOrigin->content();
}

}
}