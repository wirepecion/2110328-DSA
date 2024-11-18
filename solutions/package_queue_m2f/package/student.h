#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos)
{

    // // solution 1 swap
    // while (pos)
    // {
    //     std::swap(mData[(mFront + pos) % mCap], mData[(mFront + pos - 1) % mCap]);
    //     pos--;
    // }

    // solution 2 copy
    CP::queue<T> temp;
    // pos--;

    temp.push(mData[(mFront + pos) % mCap]);

    for(auto i = 0; i < mSize; i++){
        
        if(i == pos){
            continue;
        }else{
            temp.push(mData[(mFront + i) % mCap]);
        }

    }
    
    *this = temp;
    
}

#endif
