#pragma once

#include "..\Object.hpp"

namespace gas{
namespace coll{


template<class T>
class Array: public gas::Object{
private:
    int mCap;
    int mSize;
    int mDelta;
    T* mItems;
public:
    Array(const int cap);
    ~Array();
    Array<T>& add(const T& t);
    Array<T>& add(Array<T>& arr);
    T& get(const int index);
    Array<T>& set(const int index, const T& val);
    int length() const;
    int capacity() const;
};

template<class T> 
Array<T>::Array(const int cap): 
    mCap(cap), mSize(0), mDelta(16), mItems(new T[mCap])
{}

template<class T>
Array<T>::~Array(){
    delete[] mItems;
    mCap = 0;
    mDelta = 0;
    mSize = 0;
}

template<class T>
int Array<T>::length()const{
    return mSize;
}

template<class T>
int Array<T>::capacity()const{
    return mCap;
}

template<class T>
Array<T>& Array<T>::add(const T& t){
    mItems[mSize++] = t;
    // @todo: resizing on max capacity 
    return *this;
}

template<class T>
Array<T>& Array<T>::add(Array<T>& arr){
    for(int i = 0; i < arr.length(); i++){
        add(arr.get(i));
    }
    return *this;
}

template<class T>
T& Array<T>::get(const int index){
    // @todo: add range checking here
    return mItems[index];
}

template<class T>
Array<T>& Array<T>::set(const int index, const T& val){
    mItems[index] = val;
    return *this;
}


}
}