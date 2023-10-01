#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{2, 2, 3, 6, 9, 12, 13};
    for (int &x : v)
    {
        cout << x << " ";
    }
    int len = v.size() - 1;
    int a = 0;
    int b = 1;
    int c = 2;
    while (c <= len)
    {
        if (v[a] == -1)
        {
            int temp = c;
            c = b + 1;
            b = temp + 1;
        }
        else if (v[b] == -1)
        {
            int temp = c;
            c += 1;
        }
    }
}