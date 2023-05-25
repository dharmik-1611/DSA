// Most optimal for positive elements
// #include <bits/stdc++.h>
// using namespace std;
// int longestSubarrayWithSumK(int a[], int n, long long t)
// {
//     int left = 0, right = 0;
//     long long sum = a[0];
//     int maxLen = 0;
//     while (right < n)
//     {
//         while (left <= right and sum > t)
//         {
//             sum -= a[left];
//             left++;
//         }
//         if (sum == t)
//         {
//             maxLen = max(maxLen, right - left + 1);
//         }
//         right++;
//         if (right < n)
//             sum += a[right];
//     }
//     return maxLen;
// }
// int main()
// {
//     int a[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
//     int n = sizeof(a) / sizeof(a[0]);
//     int t = 3;
//     int ans = longestSubarrayWithSumK(a, n, t);
//     cout << "ans is " << ans << endl;
// }

// for negative + positive integers
//  #include <bits/stdc++.h>
//  int getLongestSubarray(vector<int>& nums, int k){
//  Write your code here
//     map<long long ,int>preSumMap;
//     long long sum  = 0 ;
//     int maxLen = 0 ;
//     for(int i = 0 ;i<nums.size() ;i++)
//     {
//         sum += nums[i];
//         if(sum == k )
//         {
//             maxLen = max(maxLen , i+1);
//         }
//         long long rem = sum - k ;
//         if(preSumMap.find(rem)!=preSumMap.end())
//         {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen,len);
//         }
//         if(preSumMap.find(sum) == preSumMap.end())
//         {
//             preSumMap[sum] = i;
//         }
//     }
//     return maxLen;
// }

// Brute Force
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