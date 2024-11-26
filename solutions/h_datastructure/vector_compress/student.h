#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    if(mCap == mSize) return;

    //
    T* newData = new T[mSize];

    // copy element
    for (size_t i = 0; i < mSize; i++)
    {
        /* code */
        newData[i] = mData[i];
    }

    // delete old data
    delete[] mData;

    // update mdata & mcap
    mData = newData;
    mCap = mSize;
}

#endif
