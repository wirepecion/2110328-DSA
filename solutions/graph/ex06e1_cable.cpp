#include <bits/stdc++.h>
using namespace std;

int findset(int x, vector<int> &parent){

    // if it's root
    if(parent[x] == -1) return x;
    parent[x] = findset(parent[x], parent);
    return parent[x];
}

void unionset(int x, int y, vector<int> &parent, vector<int> elements_size){
    
    // find root of 2 components?
    int s1 = findset(x, parent);
    int s2 = findset(y, parent);

    // check size before union
    if(elements_size[s1] > elements_size[s2]){
        // root of s2 will be set to root of s1
        parent[s2] = s1;
        elements_size[s1] += elements_size[s2];
    }else{
        parent[s1] = s2;
        elements_size[s2] += elements_size[s1];
    }
}

int main(){

    int n; cin >> n;

    vector<vector<int>> edges;
    vector<int> parent(n, -1);
    vector<int> elements_size(n, -1);

    int w;

    // store in adj. metrix
    for(int i = 0; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            cin >> w;
            edges.push_back({w, i, j});
        }
    }

    // sort edges first
    sort(edges.begin(), edges.end());

    int mincost = 0;

    // slove
    for(auto &e: edges){
        w = e[0];
        int x = e[1];
        int y = e[2];

        // find it's same CC?
        if(findset(x, parent) != findset(y, parent)){
            mincost += w;
            unionset(x, y, parent, elements_size);
        }
    }

    cout << mincost;


}