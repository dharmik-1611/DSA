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
}