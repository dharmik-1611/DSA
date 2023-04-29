#include <bits/stdc++.h>
using namespace std;
// #define int long long
const int N = 1e8;
vector<bool> isPrime(N + 1, true);
vector<int> ans;
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    ans.emplace_back(-1);
    for (int i = 0; i <= N; i++)
    {
        if (isPrime[i])
        {
            ans.emplace_back(i);
        }
    }
    return;
}
void solve()
{
    int n;
    cin >> n;
    cout << ans[n] << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// void makesieve(int n)
// {
//     bool isPrime[n + 1];
//     for (int i = 0; i <= n; i++)
//     {
//         isPrime[i] = true;
//     }
//     isPrime[0] = false;
//     isPrime[1] = false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (isPrime[i] == true)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         if (isPrime[i] == true)
//             cout << i << " " << isPrime[i] << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     makesieve(n);
// }
// #include <iostream>
// using namespace std;
// bool checkprime(int n)
// {
//     int count = 0;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             if (i * i == n)
//                 count += 1;
//             else
//                 count += 2;
//         }
//     }
//     if (count == 2)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (checkprime(i) == true)
//         {
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }