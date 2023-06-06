// no of provinces using bfs
#include <bits/stdc++.h>
using namespace std;
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
    int vis[n + 1] = {0};
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cnt++;
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it : ad[node])
                {
                    if (!vis[it])
                    {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
    }
    cout << "count is " << cnt << endl;
    return 0;
}
// no of provinces using dfs
//  #include <bits/stdc++.h>
//  using namespace std;
//  void dfs(int node, vector<vector<int>> &ad, int vis[])
//  {
//      vis[node] = 1;
//      for (auto it : ad[node])
//      {
//          if (!vis[it])
//          {
//              dfs(it, ad, vis);
//          }
//      }
//  }
//  int main()
//  {
//      int n, m;
//      cin >> n >> m;
//      vector<vector<int>> ad(n + 1, vector<int>());
//      for (int i = 1; i <= m; i++)
//      {
//          int u, v;
//          cin >> u >> v;
//          ad[u].push_back(v);
//          ad[v].push_back(u); // if we are using directed graph then this line must be ignored
//      }
//      for (int i = 1; i <= n; i++)
//      {
//          cout << "for node " << i << " : ";
//          for (auto it : ad[i])
//          {
//              cout << it << " ";
//          }
//          cout << endl;
//      }
//      int vis[n + 1] = {0};
//      int cnt = 0;
//      for (int i = 1; i <= n; i++)
//      {
//          if (!vis[i])
//          {
//              cnt++;
//              dfs(i, ad, vis);
//          }
//      }
//      cout << "count is " << cnt << endl;
//  }
