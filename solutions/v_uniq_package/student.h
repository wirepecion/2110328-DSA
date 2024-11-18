#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include<bits/stdc++.h>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  CP::vector<T> temp;
  std::set<T> check;

  for(auto i = 0 ; i < mSize ; ++i){
    if(check.find(mData[i]) != check.end()){
      continue;
    }else{
      temp.push_back(mData[i]);
      check.insert(mData[i]);
    }
  }

  *this = temp;
}

#endif
