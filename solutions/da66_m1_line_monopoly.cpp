#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    set<pair<int, int>> range;

    // init value in set for upperbound and prev
    range.insert({-1,-1});
    range.insert({1e9, 1e9});

    int n, left, right, action;
    cin >> n;

    while (n--)
    {
        cin >> action;

        if(action == 1){
            cin >> left >> right;
            int nextright = right++;
            
            // find upperbound of leftcase
            auto it = range.upper_bound({left + 1, -1});
            auto temp = prev(it);

            // check left overlap 
            if(left >= temp->first && left <= temp->second ){
                // merge if overlap
                left = temp->first;
                right = max(right, temp->second);
                // delete old pair that was replaced
                range.erase(temp);
            }

            // ckeck right overlap
            while (right >= it->first)
            {
                right = max(right, it->second);
                // update it to next pointer after delete old overlaped
                it = next(it);
                range.erase(prev(it));
                // or use
                // it = range.erase(it);
            }

            range.insert({left, right});
            
        }

        if(action == 2){
            cout << range.size() - 2 << "\n";
        }
    }
    
    return 0;
}