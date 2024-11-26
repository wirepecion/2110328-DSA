#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here

  // n of elements to insert
  size_t len = last - first;
  size_t posIdx = position - begin();

  ensureCapacity(mSize + len);

  // shift space
  for (size_t i = mSize; i > posIdx; --i)
  {
    /* code */
    mData[i + len - 1] = mData[i - 1];
  }

  // insert
  for (size_t i = 0; i < len; i++)
  {
    /* code */
    mData[posIdx + i] = *(first + i);
  }
  
  mSize += len;

}

#endif
