#include <bits/stdc++.h>
using namespace std;

int n; // number of vertices
vector<vector<int>> adj; // adjacency list of graph
vector<bool> visited;
bool flag = true;
void dfs(int v, vector<int>& ans, unordered_set<int> &st) {

    st.insert(v);
    visited[v] = true;

    for (int u : adj[v]) {

        if (st.find(u) != st.end())
        {
            flag = false;
        }
        if (!visited[u])
        {
            dfs(u, ans, st);
        }
    }
    ans.push_back(v);
    st.erase(v);
}

void topological_sort(vector<int>& ans) {

    visited.assign(n, false);

    for (int i = 0; i < n; ++i) {
        unordered_set<int> st;

        if (!visited[i]) {
            dfs(i, ans, st);
        }
    }
    reverse(ans.begin(), ans.end());

}