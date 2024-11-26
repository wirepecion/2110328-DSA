#include <bits/stdc++.h>
using namespace std;

int cache[31][31];

int C(int n, int k){

    if(n == k || k == 0) return 1;

    if((k >= 1) && (k <= n-1))
        if (cache[n][k]){
            return cache[n][k];
        }else{
            return cache[n][k] = C(n-1, k-1) + C(n-1, k);
        }
}

int main(){

    int n, k; cin >> n >> k;
    cout << C(n,k);

    return 0;
}