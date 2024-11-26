#include <bits/stdc++.h>
using namespace std;

bool check(const vector<int> &permute, const vector<pair<int,int>> &indexPair){

    unordered_map<int,int> positions;
    for(int i = 0 ; i < permute.size(); ++i){
        positions[permute[i]] = i;
    }

    for(auto index:indexPair){
        int a = index.first;
        int b = index.second;

        if(positions[b] <= positions[a])
        return false;

    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k, a, b; cin >> n >> k;

    vector<pair<int, int>> indexPairs;
    for(int i = 0 ; i < k; i++){
        cin >> a >> b;
        indexPairs.push_back({a,b});
    }

    vector<int> permute;

    for (int i = 0; i < n; i++)
    {
        permute.push_back(i);
    }

    do
    {
        if(check(permute, indexPairs)){
            for (auto i:permute)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        
    } while (next_permutation(permute.begin(),permute.end()));
    
    return 0;
}