#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int n, vector<vector<int>>& adj, vector<int>& indegree, vector<int>& current, vector<bool>& visited) {
    if (current.size() == n) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (!visited[i] && indegree[i] == 0) {  

            visited[i] = true;
            current.push_back(i);

            for (int neighbor : adj[i]) {
                --indegree[neighbor];
            }

            dfs(n, adj, indegree, current, visited);

            // Backtrack: remove node and restore indegrees
            for (int neighbor : adj[i]) {
                ++indegree[neighbor];
            }
            visited[i] = false;
            current.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);  
    vector<int> indegree(n, 0);  

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);  
        ++indegree[b];        
    }

    vector<bool> visited(n, false);
    vector<int> current;

    dfs(n, adj, indegree, current, visited);

    return 0;
}
