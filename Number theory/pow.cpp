// power using iterative method
// #include <bits/stdc++.h>
// using namespace std;
// long long int mod = 1e9 + 7;
// int main()
// {
//     long long int a, n, ans = 1;
//     cout << "Enter the number" << endl;
//     cin >> a;
//     cout << "Enter the power" << endl;
//     cin >> n;
//     while (n)
//     {
//         if (n & 1)
//         {
//             ans = (ans * a) % mod;
//         }
//         a = (a * a) % mod;
//         n >>= 1;
//     }
//     cout << "ans is " << ans << endl;

//     return 0;
// }
// Power using recursion method
// #include <iostream>
// using namespace std;
// long long int mod = 1000000007;
// int power(int a, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else if (n == 1)
//     {
//         return a;
//     }
//     else
//     {
//         long long int R = power(a, n / 2);
//         if (n % 2 == 0)
//         {
//             return (R * R) % mod;
//         }
//         else
//         {
//             return ((a * (R * R) % mod)) % mod;
//         }
//     }
// }
// int main()
// {
//     long long int a, n, ans;
//     cout << "Enter the number" << endl;
//     cin >> a;
//     cout << "Enter the power" << endl;
//     cin >> n;
//     ans = power(a, n);
//     cout << ans << endl;
//     return 0;
// }

// product of three numbers
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        // cout << "Enter the number" << endl;
        cin >> n;
        for (a = 2; a * a * a <= n; a++)
        {
            if (n % a == 0)
            {
                break;
            }
        }
        int rem = n / a;
        for (b = a + 1; b * b <= rem; b++)
        {
            if (rem % b == 0)
            {
                c = rem / b;
                if (b >= c)
                {
                    c = 0;
                }
                break;
            }
        }
        if (a * b * c == n)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}