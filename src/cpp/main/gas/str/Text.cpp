#include "Text.hpp"

#include <cstring>

namespace gas{
namespace str{

Text::Text(char_cp source): String(),
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

Text::Text(const Text& source): Text(source.mBuffer){}

Text::~Text(){
    delete mBuffer;
    mLen = 0;
}   

Text::operator char_p() const{
    // @todo: handle nullptr case maybe done 
    // via virtual wrapper
    return mBuffer;
}

Text& Text::operator=(const Text& source){
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

int Text::length() const{
    return mLen;
}

char_p Text::content() const{
    return mBuffer;
}

}
}