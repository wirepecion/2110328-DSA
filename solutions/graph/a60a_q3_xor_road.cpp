#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull solve(int n, vector<int> &district){
    // init vector
    vector<bool> visited(n, false);
    vector<int> beautyMax(n, 0);
    ull total = 0;

    // init first district
    visited[0] = true;
    for(int i = 1; i < n; i++){
        beautyMax[i] = district[0] ^ district[i];
    }

    // create patrial MST -> MST
    for(int iteration = 0 ; iteration < n - 1; iteration++){

        // find maximum edge
        int maxEdge = 0, nextNode = -1;
        for(int i = 0 ; i < n; i++){
            if(!visited[i] && beautyMax[i] > maxEdge){
                // maximum edge
                maxEdge = beautyMax[i];
                nextNode = i;
            }
        }

        // add edge -> MST
        visited[nextNode] = true;
        total += maxEdge;

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                beautyMax[i] = max(beautyMax[i], district[i] ^ district[nextNode]);
            }
        }

    }

    return total;
    
}

int main(){

    int n; cin >> n;
    vector<int> district(n);
    for(int i = 0 ; i < n; i++){
        cin >> district[i];
    }

    cout << solve(n, district);

}