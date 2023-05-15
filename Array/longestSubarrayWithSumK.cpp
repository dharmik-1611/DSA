
// #include <bits/stdc++.h>
// using namespace std;

// int getLongestSubarray(vector<int> &a, long long k)
// {
//     int n = a.size(); // size of the array.

//     int len = 0;
//     for (int i = 0; i < n; i++)
//     { // starting index
//         for (int j = i; j < n; j++)
//         { // ending index
//             // add all the elements of
//             // subarray = a[i...j]:
//             long long s = 0;
//             for (int K = i; K <= j; K++)
//             {
//                 s += a[K];
//             }

//             if (s == k)
//                 len = max(len, j - i + 1);
//         }
//     }
//     return len;
// }

// int main()
// {
//     vector<int> a = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
//     long long k = 4;
//     int len = getLongestSubarray(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(int a[], int n, int t)
{
    vector<vector<int>> subarray;
    int l = -1999999;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> temp;
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
                temp.push_back(a[k]);
            }
            subarray.push_back(temp);
            if (sum == t)
            {
                l = max(l, j - i + 1);
            }
        }
    }
    cout << "Subarrays is " << endl;
    for (int i = 0; i < subarray.size(); i++)
    {
        for (int j = 0; j < subarray[i].size(); j++)
        {
            cout << subarray[i][j] << " ";
        }
        cout << endl;
    }
    return l;
}
int main()
{
    int a[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int t = 3;
    int ans = longestSubarrayWithSumK(a, n, t);
    cout << "ans is " << ans << endl;
}