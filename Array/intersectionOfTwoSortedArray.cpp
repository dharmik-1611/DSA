#include <bits/stdc++.h>
using namespace std;
vector<int> intersectionArray(vector<int> &a, vector<int> &b, int n1, int n2)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> a({1, 2, 2, 3, 3, 4, 5, 6});
    vector<int> b({2, 3, 3, 5, 6, 6, 7});
    vector<int> ans = intersectionArray(a, b, a.size(), b.size());
    cout << "Final intersection array is " << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
// brute force approach
//  #include <bits/stdc++.h>
//  using namespace std;
//  vector<int> intersectionArray(vector<int> &a, vector<int> &b, int n1, int n2)
//  {
//      vector<int> vis(n2);
//      vector<int> ans;
//      for (int i = 0; i < n1; i++)
//      {
//          for (int j = 0; j < n2; j++)
//          {
//              if (a[i] == b[j] && vis[j] == 0)
//              {
//                  ans.push_back(a[i]);
//                  vis[j] = 1;
//                  break;
//              }
//              if (b[j] > a[i])
//                  break;
//          }
//      }
//      return ans;
//  }
//  int main()
//  {
//      vector<int> a({1, 2, 2, 3, 3, 4, 5, 6});
//      vector<int> b({2, 3, 3, 5, 6, 6, 7});
//      vector<int> ans = intersectionArray(a, b, a.size(), b.size());
//      cout << "Final intersection array is " << endl;
//      for (auto it : ans)
//      {
//          cout << it << " ";
//      }
//  }