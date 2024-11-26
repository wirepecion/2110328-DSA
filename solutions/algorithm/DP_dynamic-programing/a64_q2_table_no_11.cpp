#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 100000007;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n; cin >> n;

    // base case 00, 01, 10
     if (n == 1) {
        cout << 3 << endl; 
        return 0;
    }

    // dp[prev][current]
    ll dp[4] = {1, 1, 1, 0}; // base case  n = 1

    for (ll i = 2; i <= n; i++) {
        ll next_dp[4] = {0, 0, 0, 0};

        
        for (ll prev = 0; prev < 4; prev++) {
            for (ll current = 0; current < 4; current++) {
                // condition 11
                if ((prev & current) == 0 && current != 3) {
                    next_dp[current] += dp[prev];
                    next_dp[current] %= mod;
                }
            }
        }

        
        for (ll j = 0; j < 4; j++) {
            dp[j] = next_dp[j];
        }
    }

    ll ans = 0;
    for (ll step = 0; step < 4; step++) {
        ans += dp[step];
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}