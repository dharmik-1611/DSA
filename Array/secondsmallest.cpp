#include <bits/stdc++.h>
using namespace std;
int secondSmallest(int a[], int n)
{
    int fsmallest = a[0];
    int ssmallest = INT32_MAX;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < fsmallest)
        {
            ssmallest = fsmallest;
            fsmallest = a[i];
        }
        else if (a[i] != fsmallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}
int main()
{

    int n, largest = -19999;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter array element of index " << i << endl;
        cin >> x;
        largest = max(largest, x);
        a[i] = x;
    }
    cout << "Second smallest is " << secondSmallest(a, n) << endl;
}