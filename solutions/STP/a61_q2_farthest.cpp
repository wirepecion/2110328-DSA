#include<bits/stdc++.h>
using namespace std;

#define ipair pair<int,int>

int main(){

    int n; cin >> n;
   
    // strore adj. metrix
    vector<ipair> adj[n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            int w; cin >> w;
            if(w != -1 && i != j) adj[i].push_back({j, w});
        }
    }
    // init
    vector<int> dist(n, INT_MAX);

    priority_queue<ipair, vector<ipair>, greater<ipair>> pq;
    pq.push({0, 0});
    // visit first node
    dist[0] = 0;

   while (!pq.empty())
   {
        int u = pq.top().second;
        cout << u << " ";
        int w = pq.top().first;
        cout << w << " ";
        pq.pop();

        cout << dist[u] << endl;
        if(dist[u] < w) continue;

        for(auto v : adj[u]){
            int next = v.first;
            int nextw = v.second;

            if(dist[next] > w + nextw){
                dist[next] = w + nextw;
                pq.push({w + nextw, next});
            }
        }
   }

   int max_dist = 0;
   for(int i = 0 ; i < n ; i++){
        max_dist = max(max_dist, dist[i]);
        if(max_dist == INT_MAX){
            cout << -1;
            return 0;
        }
   }

   cout << max_dist;
   
}