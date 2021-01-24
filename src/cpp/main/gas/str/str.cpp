#include "str.hpp"

#include <cstring>
#include <cstdlib>

namespace gas{
namespace str{

Str::Str(char_cp s): Object(), buffer(nullptr), cap(0){
    this->buffer = new char_t[this->cap + 1];
    memset(this->buffer, '\0', cap + 1);
    strcpy(this->buffer, s);
}

Str::Str(const std::string& source): Str(source.c_str()){}

Str::~Str(){
    delete[] buffer;
    cap = 0;
}

Str::operator char_cp() const{
    return buffer;
}

Str::operator std::string() const{
    return std::string(buffer);
}

Str& Str::operator=(const Str& source){
    if(this != &source){
        // todo: 
        delete[] buffer;
        cap = 0;
        buffer = new char_t[source.cap + 1];
        memset(buffer, 0, source.cap + 1);
        strcpy(buffer, source.buffer);
        cap = source.cap;
    }
    return *this;
}

}
}