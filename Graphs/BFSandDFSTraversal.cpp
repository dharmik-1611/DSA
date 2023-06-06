// using list we are storing graphs
#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<vector<int>> &ad, int vis[], vector<int> &ls)
{
    vis[node] = 1;
    ls.push_back(node);

    // traverse all the neighbour nodes
    for (auto it : ad[node])
    {
        if (!vis[it])
        {
            dfs(it, ad, vis, ls);
        }
    }
}
vector<int> DFS(vector<vector<int>> ad, int n)
{
    int vis[n + 1] = {0};
    int start = 1;
    vector<int> ls;
    dfs(start, ad, vis, ls);
    return ls;
}
void BFS(vector<vector<int>> ad, int n)
{
    int vis[n + 1] = {0};
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    vector<int> bfs;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : ad[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    cout << endl;
    cout << "Breadth first traversal of given graph is " << endl;
    for (auto it : bfs)
    {
        cout << it << " ";
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ad(n + 1, vector<int>());
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u); // if we are using directed graph then this line must be ignored
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "for node " << i << " : ";
        for (auto it : ad[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
    BFS(ad, n);
    cout << endl;
    cout << "Depth first traversal using graph is  " << endl;
    vector<int> ans = DFS(ad, n);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
