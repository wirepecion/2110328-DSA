#include <bits/stdc++.h>
using namespace std;

int main(){


    ios_base::sync_with_stdio(false); cin.tie(0);
    int N, M, num, query;
    cin >> N >> M;

    multiset<int> A, B_query;

    while (N--)
    {
        cin >> num;
        A.insert(num);
    }

    for (int i = 0 ; i < M ; i++)
    {
        cin >> query;
        
        bool flag = false;
        for(auto element:A){

            int a_pair = query - element;
            if(A.find(a_pair) != A.end() && a_pair != element){
                cout << "YES" << endl;
                flag= true;
                break;
            }

        }

        if(!flag) cout << "NO" << endl;

    }
    


    return 0;
}