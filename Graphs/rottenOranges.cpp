#include <bits/stdc++.h>
using namespace std;
int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    // for considering time we have required data structure like this {{r,c},t}
    queue<pair<pair<int, int>, int>> q;
    int vis[n][m];
    int cntFresh = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
            }
            else
            {
                vis[i][j] = 0;
            }
            if (grid[i][j] == 1)
            {
                cntFresh++;
            }
        }
    }
    int cnt = 0;
    int tm = 0;
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nrow = r + drow[i];
            int ncol = c + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1)
            {
                q.push({{nrow, ncol}, t + 1});
                cnt++;
                vis[nrow][ncol] = 2;
            }
        }
    }
    if (cnt != cntFresh)
    {
        return -1;
    }
    else
    {
        return tm;
    }
}
int main()
{
    int n, m;
    cout << "Enter row and column " << endl;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    cout << "Enter the elements of the grid" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            grid[i][j] = x;
        }
    }
    // cout << "input matrix is " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int ans = orangesRotting(grid);
    cout << "ans is " << ans << endl;
}