#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{   
    // // solution_1 temporary stack
    // T tmp[b+1];

    // for(int i = b; i >= 0 ; i--){
    //     tmp[i] = top();
    //     pop();
    // }

    // for(int i = 0; i <= b ; i++){
    //     push(tmp[i]);
    //     if(i < b - a + 1) push(tmp[i]);
    // }

    // solution 2 
    int range = b - a + 1;
    if(mCap < mSize + range) expand(mSize * 2);

    // shift first a elements
    for(int i = 0 ; i < a ; i++){
        mData[mSize + range - i - 1] = mData[mSize - i - 1];
    }

    // shi
    for(int i = ){

    }

    mSize += range;
    

}

#endif