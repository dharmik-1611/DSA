#include <bits/stdc++.h>
using namespace std;
void dfs(int row, int col, vector<vector<int>> &ans, vector<vector<int>> &image, int newColor, int initColor, int delRow[], int delCol[])
{
    ans[row][col] = newColor;
    int n = image.size();
    int m = image[0].size();
    for (int i = 0; i < 4; i++)
    {
        int nrow = row + delRow[i];
        int ncol = col + delCol[i];
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == initColor && ans[nrow][ncol] != newColor)
        {
            dfs(nrow, ncol, ans, image, newColor, initColor, delRow, delCol);
        }
    }
}
int main()
{
    int n, m, st, end;
    cout << "Enter row and column" << endl;
    cin >> n >> m;
    cout << "Enter starting point and ending point of the coordinates which you want to start " << endl;
    cin >> st >> end;
    int newColor;
    cout << "Enter the new color" << endl;
    cin >> newColor;
    cout << "Enter the all matrix elements " << endl;
    vector<vector<int>> image(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int n;
            cin >> n;
            image[i][j] = n;
        }
    }
    cout << "new matrix is " << endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> ans = image;
    int initColor = image[st][end];
    int delRow[] = {-1, 0, 1, 0};
    int delCol[] = {0, 1, 0, -1};
    dfs(st, end, ans, image, newColor, initColor, delRow, delCol);
    cout << "Final answer matrix is " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}