// next smaller element
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      vector<int> v;
//      stack<int> s;
//      s.push(-1);
//      int n, j = 0;
//      cout << "Enter the size of the array" << endl;
//      cin >> n;
//      vector<int> ans(n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter the element" << endl;
//         cin >> x;
//         v.push_back(x);
//     }
//     for (int i = v.size() - 1; i >= 0; i--)
//     {
//         int curr = v[i];
//         while (s.top() >= curr)
//         {
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// prev smaller element
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     stack<int> s;
//     s.push(-1);
//     int n, j = 0;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     vector<int> ans(n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter the element" << endl;
//         cin >> x;
//         v.push_back(x);
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         int curr = v[i];
//         while (s.top() >= curr)
//         {
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// next greater element
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     stack<int> s;
//     s.push(-1);
//     int n, j = 0;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     vector<int> ans(n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter the element" << endl;
//         cin >> x;
//         v.push_back(x);
//     }
//     for (int i = v.size() - 1; i >= 0; i--)
//     {
//         int curr = v[i];
//         while (s.top() != -1 && curr >= s.top())
//         {
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// prev greater element
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    stack<int> s;
    s.push(-1);
    int n, j = 0;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the element" << endl;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        int curr = v[i];
        while (s.top() != -1 && curr >= s.top())
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}