#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v = A;

    bool isHave[100000] = {false};

    // loop element in a
    for(auto e : A){
        isHave[e] = true;
    }

    // loop element in b
    for(auto e : B){
        if(!isHave[e]){
            v.push_back(e);
        }else{
            isHave[e] = true;
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;

    bool isHave[100000] = {false};
    
    // loop marker in isHave with element in B
    for(auto e: B){
        isHave[e] = true;
    }

    // loop element is intersect (A)
    for(auto e: A){
        if(isHave[e]){
            v.push_back(e);
        }
    }
    
    return v;
}
