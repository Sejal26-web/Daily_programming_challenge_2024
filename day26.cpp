#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool detect(int src, vector<int> adj[], int vis[]) {
    vis[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});
    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto adjacentnode : adj[node]) {
            if (!vis[adjacentnode]) {
                vis[adjacentnode] = 1;
                q.push({adjacentnode, node});
            } else if (parent != adjacentnode) {
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]) {
    int vis[V] = {0};
    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            if (detect(i, adj, vis))
                return true;
        }
    }
    return false;
}

int main() {
    int V = 6; 
    // Number of vertices (modify as needed)
  
    vector<int> adj[V];
    adj[0].push_back(0);
    adj[1].push_back(1);
    adj[2].push_back(2);
     adj[3].push_back(3);
      adj[4].push_back(4);
       adj[5].push_back(0);
    // Add more edges as required

    bool hasCycle = isCycle(V, adj);
    if (hasCycle) {
        cout << "The graph contains a cycle." << endl;
    } else {
        cout << "The graph does not contain a cycle." << endl;
    }

    return 0;
}
