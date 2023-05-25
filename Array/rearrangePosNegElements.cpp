#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &a)
{
    vector<int> pos, neg;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            neg.push_back(a[i]);
        }
        else
        {
            pos.push_back(a[i]);
        }
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            a[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}
int main()
{
    vector<int> a{1, 2, -3, -1, -2, 3};
    vector<int> ans = rearrangeArray(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
// Variety - 1 equal number of pos and neg elements
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> rearrangeArray(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 0);
//     int posIndex = 0, negIndex = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] < 0)
//         {
//             ans[negIndex] = nums[i];
//             negIndex += 2;
//         }
//         else
//         {
//             ans[posIndex] = nums[i];
//             posIndex += 2;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> v{3, 1, -2, -5, 2, -4};
//     vector<int> ans = rearrangeArray(v);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }