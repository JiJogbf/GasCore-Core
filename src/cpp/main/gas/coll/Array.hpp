#pragma once

#include <exception>
#include <stdexcept>

#include "..\Object.hpp"

namespace gas{
namespace coll{

// @todo: #3 Create safe decorator for Array class.

template<class T>
class Array: public gas::Object{
private:
    int mCap;
    int mSize;
    int mDelta;
    T*  mItems;
    void expand();
    bool isInRange(int index);
    bool isEnoughCap();
    bool isNotEnough();
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
bool Array<T>::isInRange(int index){
    return (index >= 0) && (index < mCap);
}

template<class T>
bool Array<T>::isNotEnough(){
    return mSize >= mCap;
}

template<class T>
bool Array<T>::isEnoughCap(){
    return mSize < mCap;
}

template<class T>
void Array<T>::expand(){
    int newCap = mSize + mDelta;
    T* ptr = new T[newCap];
    for(int i= 0; i < mSize; i++){
        ptr[i] = mItems[i];
    }
    mCap = newCap;
    // todo: implement me
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
    if(isNotEnough()){
        expand();
    }
    mItems[mSize++] = t;
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
    if(!isInRange(index)){
        // @todo: #4 adding formatting here
        throw std::out_of_range("index out of range");
    }
    return mItems[index];    
}

template<class T>
Array<T>& Array<T>::set(const int index, const T& val){
    if(!isInRange(index)){
        // @todo: #4 adding formatting here
        throw std::out_of_range("index out of range");
    }
    mItems[index] = val;
    return *this;
}


}
}
