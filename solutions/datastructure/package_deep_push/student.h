#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
    //write your code here
    mSize += 1;
    ensureCapacity(mSize);
    auto idx = mSize - 1 - pos;

    //  shifting value
    for (size_t i = mSize; i > idx; --i)
    {
      /* code */
      mData[i] = mData[i-1];

    }
    
    mData[idx] = value;
    // mSize += 1;
}

#endif
