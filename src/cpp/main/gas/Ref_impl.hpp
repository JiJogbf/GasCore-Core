template<class T>
Ref<T>::Ref(T& val):mValue(val){}

template<class T>
T& Ref<T>::value(){
    return mValue;
}