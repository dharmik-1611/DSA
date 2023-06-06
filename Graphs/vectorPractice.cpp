#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<vector<int>> v(4, vector<int>(4, 0));
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    vector<vector<int>> graph(4, vector<int>());
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            graph[i].push_back(j);
        }
    }
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}