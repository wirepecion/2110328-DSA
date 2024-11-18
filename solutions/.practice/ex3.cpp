#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, num;
    cin >> n;

    set<int> input, check;

    for(int i = 1 ; i <= n; i++){
        cin >> num;
        input.insert(num);
        check.insert(i);
    }

    if(input == check) cout << "YES";
    else cout << "NO";

}