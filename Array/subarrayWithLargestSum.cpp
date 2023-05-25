// Better
#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(int a[], int n, int t)
{
    vector<int> subarray;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << endl;
    int ansStart = -1;
    int ansEnd = -1;
    int start;
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += a[i];
        if (sum > maxi)
        {
            // cout << sum << ">" << maxi << endl;
            maxi = sum;
            // cout << "so maxi is " << maxi << endl;
            ansStart = start;
            // cout << "ansstart is " << ansStart << endl;
            ansEnd = i;
            // cout << "ansend is " << ansEnd << endl;
        }
        if (sum < 0)
        {
            // cout << sum << " is less than zero so sum is ";
            sum = 0;
            // cout << sum << endl;
        }
    }
    for (int i = ansStart; i <= ansEnd; i++)
    {
        subarray.push_back(a[i]);
    }
    cout << "Subarray is " << endl;
    for (int i = 0; i < subarray.size(); i++)
    {
        cout << subarray[i] << " ";
    }
    cout << endl;
    return maxi;
}
int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int t = 3;
    int ans = longestSubarrayWithSumK(a, n, t);
    cout << "ans is " << ans << endl;
}
// Brute
//  #include <bits/stdc++.h>
//  using namespace std;
//  int longestSubarrayWithSumK(int a[], int n, int t)
//  {
//      vector<vector<int>> subarray;
//      int sum1 = -1999999;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = i; j < n; j++)
//          {
//              vector<int> temp;
//              int sum = 0;
//              for (int k = i; k <= j; k++)
//              {
//                  sum += a[k];
//                  temp.push_back(a[k]);
//              }
//              subarray.push_back(temp);
//              sum1 = max(sum, sum1);
//          }
//      }
//      cout << "Subarrays is " << endl;
//      for (int i = 0; i < subarray.size(); i++)
//      {
//          for (int j = 0; j < subarray[i].size(); j++)
//          {
//              cout << subarray[i][j] << " ";
//          }
//          cout << endl;
//      }
//      return sum1;
//  }
//  int main()
//  {
//      int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//      int n = sizeof(a) / sizeof(a[0]);
//      int t = 3;
//      int ans = longestSubarrayWithSumK(a, n, t);
//      cout << "ans is " << ans << endl;
//  }