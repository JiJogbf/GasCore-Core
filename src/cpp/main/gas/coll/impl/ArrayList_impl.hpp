template<class T>
ArrayList<T>::ArrayList(int capacity): 
        mItems(nullptr), mCount(0),
        mCapacity(capacity) 
{}

template<class T>
ArrayList<T>::~ArrayList(){
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
    // @todo: if capacity is not 
    mItems[mCount++] = obj;
}

template<class T>
T* ArrayList<T>::item(const int index){
    return mItems[index];
}

template<class T>
void ArrayList<T>::remove(T* obj){
    // @todo: implement removal
}   

template<class T>
bool ArrayList<T>::has(T* obj){
    for(int i = 0; i < mCount; i++){
        if(mItems[i] == obj){
            return true;
        }
    }
    return false;
}