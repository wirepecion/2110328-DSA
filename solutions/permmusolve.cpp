#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> before;
vector<int> v;
vector<bool> used;

void permu(int step){
    if(step == n){
        for(auto e:v) cout << e << " ";
        cout << "\n";
    }

    for(int i = 0 ; i < n ; i ++){
        if((used[i] == false) && (before[i] == -1 || used[before[i]])){
            v[step] = i;
            used[i] = true;
            permu(step+1);
            used[i] = false;
        }
    }
}

int main(){

    cin >> n >> m;
    before = vector<int>(n,-1);
    used.resize(n);
    v.resize(n);
    
    for (int i = 0;i < m;i++) {
    int a,b;
    cin >> a >> b;
    before[b] = a; //a must comes before b
    }

    return 0;
}