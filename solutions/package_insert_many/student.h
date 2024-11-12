#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm> 
#include <utility>
#include <vector>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  std::sort(data.begin(), data.end());

  size_t insertlen = data.size();
  ensureCapacity(mSize + insertlen);

  std::vector<T> temp(mSize + insertlen);

  int current_idx = 0;
  int insert_idx = 0;

  for (size_t i = 0; i < insertlen; i++)
  {
    while (current_idx < mSize && current_idx < data[i].first){
      temp[insert_idx++] = mData[current_idx++];
    }

    temp[insert_idx++] = data[i].second;
    
  }

  while (current_idx < mSize)
  {
    /* code */
    temp[insert_idx++] = mData[current_idx++];
  }
  
  
  // O^2 solutions
  // for(auto& p:data){
  //   int idx = p.first + offset;
  //   insert(begin() + idx, p.second);
  //   offset++;
  // }

  delete[] mData;
  mData = new T[mSize + insertlen];
  std::copy(temp.begin(), temp.end(), mData);

  mSize += insertlen;

}

#endif
