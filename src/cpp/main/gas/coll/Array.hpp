#pragma once

#include "..\Object.hpp"

namespace gas{
namespace coll{


template<class T>
class Array: public gas::Object{
private:
    T* mItems;
    int mSize;
public:
    Array(int count);
    ~Array();
    Array<T>& add(const T& t);
    Array<T>& add(Array<T>& arr);
    T& get(const int index);
    Array<T>& set(const int index, const T& val);
    
    // todo: overload operator's
};


template<class T>
Array<T>::Array(int count): mItems(nullptr), mSize(count){
    mItems = new T[mSize];
}

template<class T>
Array<T>::~Array(){
    delete[] mItems;
    mSize = 0;
}

template<class T>
Array<T>& Array<T>::add(const T& t){
    return *this;
}

template<class T>
Array<T>& Array<T>::add(Array<T>& arr){
    return *this;
}

template<class T>
T& Array<T>::get(const int index){
    // @todo: add range checking here
    mItems[index];
}

template<class T>
Array<T>& Array<T>::set(const int index, const T& val){
    mItems[index] = val;
    return *this;
}


}
}