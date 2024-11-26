#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    //write your code here
    if(pos.empty()) return;

    size_t shiftleft = 0;

    for (size_t i = 0; i < mSize; ++i)
    {
      /* code */ 
      if (shiftleft < pos.size() && i == pos[shiftleft])
      {
        /* code */
        shiftleft++;
      }else{
        // shift data to left
        mData[i - shiftleft] = mData[i];
      }
      
    }

    mSize -= shiftleft;
  
}

#endif
