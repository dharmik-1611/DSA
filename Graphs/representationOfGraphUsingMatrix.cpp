
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // simply using matrix
//     int n, m; // n = nodes , m= edges
//     cin >> n >> m;
//     int adj[n + 1][n + 1];
//     for (int i = 1; i <= m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u][v] = 1; // if we want to store weighted graph using matrix then we have to use adj[u][v] = given_weight
//         adj[v][u] = 1;
//     }
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (adj[i][j] == 1)
//             {
//                 cout << "edge from node " << i << "-------" << j << endl;
//             }
//         }
//     }
// }

// Representation of weighted graph using matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // simply using matrix
    int n, m; // n = nodes , m= edges
    cin >> n >> m;
    int adj[n + 1][n + 1];
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w; // if we want to store weighted graph using matrix then we have to use adj[u][v] = given_weight
        adj[v][u] = w;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (adj[i][j] != 0)
            {
                cout << "edge from node " << i << "-------" << j << endl;
            }
        }
    }
}