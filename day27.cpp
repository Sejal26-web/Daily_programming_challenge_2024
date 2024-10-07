#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int shortestpath(int v, vector<vector<int>>& edges, int start, int end) {
    vector<vector<int>> adjlist(v);

    for (const auto& edge : edges) {
        adjlist[edge[0]].push_back(edge[1]);
        adjlist[edge[1]].push_back(edge[0]);
    }

    queue<int> q;
    vector<bool> vis(v, false);
    vector<int> distance(v, -1);

    q.push(start);
    vis[start] = true;
    distance[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adjlist[node]) {
            if (!vis[neighbor]) {
                q.push(neighbor);
                vis[neighbor] = true;
                distance[neighbor] = distance[node] + 1;
            }
        }
    }

    return distance[end];
}

int main() {
    int v = 5;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}};
    int start = 0;
    int end = 4;
    int result = shortestpath(v, edges, start, end);

    if (result != -1) {
        cout << "Shortest path from node " << start << " to node " << end << " is: " << result << endl;
    } else {
        cout << "No path exists between nodes " << start << " and " << end << endl;
    }

    return 0;
}
