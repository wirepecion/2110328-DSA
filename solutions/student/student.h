#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
  {
  
    if(pos.empty()) return;

    std::sort(pos.begin(), pos.end());

    // shiftleft store now how many data that was removed, this will use indexing for next remove
    size_t shiftleft = 0;
    size_t pos_idx = 0;

    for (size_t i = 0; i < mSize; ++i)
    {

      size_t idx = (mFront + i) % mCap;
      /* code */ 
      if (pos_idx < pos.size() && i == pos[pos_idx])
      {
        /* code */
        shiftleft++;
        pos_idx++;
      }else{
        // shift data to left
        mData[(mFront + i - shiftleft) % mCap] = mData[idx];
      }
      
    }

    mSize -= shiftleft;

  }

#endif
