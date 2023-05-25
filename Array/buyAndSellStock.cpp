#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(a) / sizeof(a[0]);
    int maxi = -199;
    int mini = a[0];
    for (int i = 1; i < size; i++)
    {
        int cost = a[i] - mini;
        maxi = max(maxi, cost);
        mini = min(mini, a[i]);
    }
    cout << maxi << endl;
}