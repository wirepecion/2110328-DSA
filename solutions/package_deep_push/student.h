#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
    //write your code here
    ensureCapacity(mSize + pos);

    //  shifting value
    for (size_t i = Size + pos; i > pos; --i)
    {
      /* code */
      mData[i] = mData[i-pos];

    }
    
    // // push value
    // for (size_t i = 0; i < pos; i++)
    // {
    //   /* code */
    //   mData[i] = value;
    // }
    
    mData[mSize] = value;
    mSize += pos;
}

#endif
