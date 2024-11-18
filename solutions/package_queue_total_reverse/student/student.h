#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse()
{
  // Your code here

  // // solution 1 swap
  // auto start = mFront;
  // auto back = (mFront + mSize - 1);
  // while (start < back)
  // {
  //   std::swap(mData[start % mCap], mData[back % mCap]);
  //   start++;
  //   back--;
  // }

  // solution 2 use aux defult 1 == reverse
  if (aux == 1)
  {
    aux = 0;
  }
  else
  {
    aux = 1;
  }
}

template <typename T>
const T &CP::queue<T>::front() const
{
  // You MAY need to edit this function
  if (aux == 1)
    return mData[(mFront + mSize - 1) % mCap];
  return mData[mFront % mCap];
}

template <typename T>
const T &CP::queue<T>::back() const
{
  // You MAY need to edit this function
  if (aux == 1)
    return mData[mFront];
  return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T &element)
{
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if(aux == 1){
    mData[(mFront - 1 + mCap) % mCap] = element;
    mFront = (mFront - 1 + mCap) % mCap;
  } 
  else mData[(mFront + mSize) % mCap] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop()
{
  // You MAY need to edit this function
  if (aux == 1)
  {
    // none
  }
  else
  {
    mFront = (mFront + 1) % mCap;
  }
    mSize--;
}

#endif