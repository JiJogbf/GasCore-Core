#include "str.hpp"

#include "str_editor.hpp"

#include <cstring>
#include <cstdlib>

namespace gas{
namespace str{

Str::Str(char_cp s): Object(), buffer(nullptr), cap(0){
    this->cap = strlen(s);
    this->buffer = new char_t[this->cap + 1];
    memset(this->buffer, '\0', this->cap + 1);
    strcpy(this->buffer, s);
}

Str::Str(const std::string& source): Str(source.c_str()){}

Str::~Str(){
    delete[] buffer;
    cap = 0;
}

int Str::size() const{
    return cap;
}

char_cp Str::content() const{
    return buffer;
}

StrEditor* Str::edit(){
    return new StrEditor(buffer, cap);
}

Str::operator char_cp() const{
    return buffer;
}

Str::operator std::string() const{
    return std::string(buffer);
}

Str& Str::operator=(const Str& source){
    if(this != &source){
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