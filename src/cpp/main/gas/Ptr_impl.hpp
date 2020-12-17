#ifndef GAS_PTR_IMPL_HPP
#define GAS_PTR_IMPL_HPP

namespace gas{
    template<class T>
    Ptr<T>::Ptr(T* ptr): Object(), mPtr(ptr), mCount(1){}

    template<class T>
    Ptr<T>::~Ptr(){
        if(mCount > 0){
            mCount--;
        }
        if(mCount == 0){
            delete mPtr;
        }
        mPtr = nullptr;
    }

    template<class T>
    Ptr<T>::Ptr(Ptr& p): Object(), mPtr(p.mPtr), mCount(p.mCount + 1){}

    template<class T>
    Ptr<T>& Ptr<T>::operator=(Ptr& p){
        if(&p != this){
            mPtr = p.mPtr;
            mCount = ++p.mCount;
        }
        return *this;
    }

    template<class T>
    T& Ptr<T>::operator*(){
        return *mPtr;
    }

    template<class T>
    T* Ptr<T>::operator->(){
        return mPtr;
    }

    template<class T>
    Ptr<T>::operator T*(){
        return mPtr;
    }
}

#endif 