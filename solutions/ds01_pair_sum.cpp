#include <bits/stdc++.h>
using namespace std;

void pairsum(multiset<int> &inputs, int piece) {   

    bool flag = false;
    for(auto x : inputs) {
        if(inputs.find(piece - x) != inputs.end() && piece - x != x) { 
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

}


int main(){

    ios_base::sync_with_stdio(false); cin.tie(0);

    multiset<int> inputs;

    int N, M, num;
    cin >> N >> M;

    for ( int i = 0; i < N; i++)
    {
        cin >> num;
        inputs.insert(num);
    }

    for (  int i = 0; i < M; i++)
    {
        cin >> num;
        pairsum(inputs, num);
    }
    
    return 0;
}