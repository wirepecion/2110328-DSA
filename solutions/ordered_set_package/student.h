#include <vector>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    unordered_set<T> seen;

    f
    
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    unordered_set<T> set_A(A.begin(), A.end());
    for (const T &e : B)
    {
        /* code */
        if(set_A.count(e)){
            v.push_back(e);
        } 
    }
    
    return v;
}
