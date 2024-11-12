#include <bits/stdc++.h>
using namespace std;


bool compare(pair<string, int> &a, pair<string, int> &b){
    return a.second < b.second;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K; cin >> N >> K;

    unordered_map<string, int> vote;
    priority_queue<pair<int, string>> pq;
    string name;

    while (N--)
    {
        cin >> name;
        if(vote.find(name) == vote.end()){
            vote[name] = 0;
        }
        vote[name] += 1;
    }

    for(const auto &entry : vote){
        pq.push({entry.second, entry.first});
    }
    

    int count = 0;
    int numvote = -1;
    while (!pq.empty() && count < K)
    {
        auto e = pq.top();
        numvote = e.first;
        // cout << e.first << " " << e.second << endl;
        pq.pop();
        count++;
    }

    cout << numvote;
    

    return 0;
}