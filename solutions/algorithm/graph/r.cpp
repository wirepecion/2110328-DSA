#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, max_degree = 0;
    cin >> n;
    vector<int> answer(n);

    for(int i = 0 ; i < n; i++){
        int sum_degree = 0, adj_value = 0;

        for(int j = 0 ; j < n ; j++){
            cin >> adj_value;
            sum_degree += adj_value;
        }

        max_degree = max(max_degree, sum_degree);
        answer[sum_degree] += 1;
    }

    for(int i = 0 ; i < max_degree + 1 ; i++){
        cout << answer[i] << " ";
    }

    return 0;
}