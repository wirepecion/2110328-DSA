#include <bits/stdc++.h>
using namespace std;

// check p is ancestor of i
bool check(int node, int parent, int i){
    while (i != parent && i != 0)
    {
        i = (i - 1 )/ 2;
    }

    if(i == parent) return true;
    return false;
    
}

int main(){

    int node, parent;

    cin >> node >> parent;

    vector<int> result;

    for(int i = 0; i < node ; i++){
        // check node
        if(check(node, parent, i)){

        }else{
            result.push_back(i);
        }
    }

    cout << result.size() << endl;
    for(auto e: result){
        cout << e << " ";
    }


    return 0;
}