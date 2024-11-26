#include <bits/stdc++.h>
using namespace std;

const int mod = int(1e6) + 3;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> s(k);

    for(int i = 0 ; i < k ; i++){
        cin >> s[i];
    }

    vector<int> dp(n + 1, 0);

    // base case
    dp[0] = 1;

    // every chocolate size from 1 - n
    for(int i = 1 ; i <= n ; i++){
        // case of element  
        for(int element: s){
            // when size is more than element
            if(i >= element){
                // cout << "before" << " " << dp[i] << " " << dp[i - element] << endl; 
                dp[i] = (dp[i] + dp[i - element]) % mod;
                // cout << i << " " << element << " " << dp[i] << " " <<dp[i - element]<< endl;

            }
        }
    }

    cout << dp[n] << endl;


    // cout <<  mod;

    return 0;
}