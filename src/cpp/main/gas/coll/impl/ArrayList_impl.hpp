template<class T>
ArrayList<T>::ArrayList(int capacity): 
        List<T>(),
        mItems(nullptr), mCount(0),
        mCapacity(capacity) 
{
    mItems = new T*[mCapacity];
    for(int i = 0; i < mCapacity; i++){
        mItems[i] = nullptr;
    }
}

template<class T>
ArrayList<T>::~ArrayList(){
    for(int i = 0; i < mCount; i++){
        delete mItems[i];
    }   
    delete[] mItems;
    mCount = 0;
    mCapacity = 0;
}

template<class T>
int ArrayList<T>::count(){
    return mCount;
}

template<class T>
void ArrayList<T>::add(T* obj){
    mItems[mCount++] = obj;
}

template<class T>
T* ArrayList<T>::get(const int index){
    return mItems[index];
}

template<class T>
void ArrayList<T>::set(const int index, T* value){
    mItems[index] = value;
}

template<class T>
void ArrayList<T>::remove(T* obj){
    // @todo: implement removal
}   

template<class T>
Iterator<T>* ArrayList<T>::iterator(){
    return nullptr;
}

template<class T>
bool ArrayList<T>::contains(T* obj){
    return false;
}