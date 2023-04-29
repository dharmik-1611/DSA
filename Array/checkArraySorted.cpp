#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, count = 0;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter array element of index " << i << endl;
        cin >> x;
        a[i] = x;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        cout << "false" << endl;
    }
    else if (count == 0)
    {
        cout << "true" << endl;
    }
}