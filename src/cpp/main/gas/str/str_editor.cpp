#include "str_editor.hpp"

#include <cstring>
#include <cstdlib>

#include "str.hpp"

namespace gas{
namespace str{

StrEditor::StrEditor(char_p buffer, int cap): 
    Object(), buffer(buffer), cap(cap){}

StrEditor::~StrEditor(){
    delete[] buffer;
    cap = 0;
}

StrEditor& StrEditor::append(char_cp s){
    // @todo: performing expanding of capacity if needed
    strcat(buffer, s);
    return *this;
}

StrEditor& StrEditor::pack(){
    // try calculate real accupied count of 
    // character position's

    // we decided to think that zero is not useful letter for string
    // and we try to avoid hold them in string (in trail)
    int real_size_count = 0;

    // todo: if capacity is too large of 
    // content's we holding that we need to 
    // reallocate buffer size with smaller memory usage
    return *this;
}

StrEditor& StrEditor::capacity(int new_cap){
    if( (new_cap == cap) || (new_cap < 0))
        return *this;
        
    if(new_cap > 0){
        char_p new_buffer = new char_t[new_cap + 1];
        memset(new_buffer, 0, new_cap + 1);
        int len = strlen(buffer);
        if(len >= new_cap){
            len = new_cap;
        }
        strncpy(new_buffer, buffer, len);
        delete[] buffer;
        buffer = nullptr;
        buffer = new_buffer;
    }else if(new_cap == 0){
        delete[] buffer;
        buffer = nullptr;
    }
    cap = new_cap;
    return *this;
}

StrEditor& StrEditor::reserve(int new_cap){
    // @todo: implement case when new_cap is less than zero!
    int expanded_cap = new_cap + cap + 1;
    char_p new_buffer = new char_t[expanded_cap];
    memset(new_buffer, 0, expanded_cap);
    strcpy(new_buffer, buffer);
    delete[] buffer;
    buffer = nullptr;
    buffer = new_buffer;
    cap = expanded_cap;
    return *this;
}

Str StrEditor::commit(){
    return Str(buffer);
}

}
}