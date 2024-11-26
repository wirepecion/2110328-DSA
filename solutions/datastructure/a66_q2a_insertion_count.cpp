#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    int query;
    for (int i = 0; i < m; ++i) {
        cin >> query;
        int count = 0;
        int idx = 0;

        while (true)
        {
            if(A[idx] == query){
                break;
            }

            if(A[idx] > query){
                count++;
            }

            idx++;
        }

        cout << count << endl;
        
    }

    return 0;
}
