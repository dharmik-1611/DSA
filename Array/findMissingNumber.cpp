// optimal approach
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &v, int n)
{
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ v[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n + 1;
    return xor1 ^ xor2;
}
int main()
{
    // vector<int> v({1, 2, 3, 5});
    // int ans = missingNumber(v, v.size());
    // cout << "Missing number is " << ans << endl;

    cout << "Hello world " + 22 << endl;
}
// better solution by calculating the sum
// #include <bits/stdc++.h>
// using namespace std;
// int missingNumber(vector<int> &v, int n)
// {
//     int number = n + 1;
//     int sum = (number * (number + 1)) / 2;
//     for (int i = 0; i < n; i++)
//     {
//         sum -= v[i];
//     }
//     return sum;
// }
// int main()
// {
//     vector<int> v({1, 2, 3, 4});
//     int ans = missingNumber(v, v.size());
//     cout << "Missing number is " << ans << endl;
// }

// brute force by linear search and checking all elements
// #include <bits/stdc++.h>
// using namespace std;
// int missingNumber(vector<int> &v, int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//             return i;
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> v({1, 2, 4, 5});
//     int ans = missingNumber(v, v.size());
//     cout << "Missing number is " << ans << endl;
// }