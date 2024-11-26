#include <bits/stdc++.h>
using namespace std;

void recur(vector<vector<int>> &v, int a, int b, int top, int bottom, int l, int r){
    // base a == 0
    if(a == 0){
        v[top][l] = b;
        return;
    }

    int midRow = (top + bottom) / 2;
    int midCol = (l + r) / 2;

    // caluate top left
    recur(v, a - 1, b, top, midRow, l, midCol);
    // caluate top right
    recur(v, a - 1, b - 1, top, midRow, midCol, r);
    // calcuate bottom left
    recur(v, a - 1, b + 1, midRow, bottom, l, midCol);
    // calculate bottom right
    recur(v, a - 1, b, midRow, bottom, midCol, r);
}

int main(){

    int a, b;

    cin >> a >> b;

    vector<vector<int>> v((1 << a), vector<int>(1 << a));

    recur(v, a, b, 0, 1 << a, 0, 1 << a);

    for(auto &row : v){
        for(auto element: row){
            cout << element  << " ";
        }
        cout << endl;
    }

    return 0;
}