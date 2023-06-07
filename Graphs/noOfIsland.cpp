#include <bits/stdc++.h>
using namespace std;
void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid)
{
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});
    int n = grid.size();
    int m = grid[0].size();
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        // traverse the neighbour and mark them visited if it is a land
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nrow = row + delrow;
                int ncol = col + delcol;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && !vis[nrow][ncol])
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int n;
            cin >> n;
            grid[i][j] = n;
        }
    }
    cout << "new matrix is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "for row " << i << endl;
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int cnt = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (!vis[row][col] && grid[row][col] == 1)
            {
                cnt++;
                dfs(row, col, vis, grid);
            }
        }
    }
    cout << "Total no of islands are " << cnt << endl;
}