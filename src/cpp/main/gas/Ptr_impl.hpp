#ifndef GAS_PTR_IMPL_HPP
#define GAS_PTR_IMPL_HPP

namespace gas{
    template<class T>
    Ptr<T>::Ptr(T* ptr): Object(), mPtr(ptr){}

    template<class T>
    Ptr<T>::~Ptr(){
        if(mPtr){
            delete mPtr;
            mPtr = nullptr;
        }    
    }
}

#endif 