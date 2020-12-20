#include "String.hpp"

#include <cstring>

namespace gas{
namespace str{

String::String(char_cp source):
    mBuffer(nullptr), mLen(0)    
{
    if(source != nullptr){
        mLen = strlen(source);
        int tmpLen = mLen + 1;
        mBuffer = new char_t[tmpLen];
        memset(mBuffer, '\0', tmpLen);
        strcpy(mBuffer, source);
    }
}

String::String(const String& source): String(source.mBuffer){}

String::~String(){
    delete mBuffer;
    mLen = 0;
}   

String::operator char_p() const{
    // @todo: handle nullptr case maybe done 
    // via virtual wrapper
    return mBuffer;
}

String& String::operator=(const String& source){
    if(this != &source){
        delete mBuffer;
        mLen = strlen(source.mBuffer);
        int tmpLen = mLen + 1;
        this->mBuffer = new char_t[tmpLen];
        memset(this->mBuffer, '\0', tmpLen);
        strcpy(this->mBuffer, source);
    }
    return *this;
}

int String::length() const{
    return mLen;
}

}
}