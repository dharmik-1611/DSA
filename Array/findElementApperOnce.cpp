#include <bits/stdc++.h>
using namespace std;
int findElementAppearOnce(int a[], int n)
{
    int ans;
    if (n == 1)
    {
        return a[0];
    }
    if (a[0] != a[1])
    {
        return a[0];
    }
    if (a[n - 1] != a[n - 2])
    {
        return a[n - 1];
    }
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
        {
            ans = a[mid];
            break;
        }
        if (a[mid] == a[mid - 1])
        {
            // low to mid elements count
            int lc = mid - lo + 1;
            if (lc % 2 == 0)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 2;
            }
        }
        else if (a[mid] == a[mid + 1])
        {
            // mid to high elements count
            int rc = hi - mid + 1;
            if (rc % 2 == 0)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 2;
            }
        }
    }
    return ans;
}
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
    int size = sizeof(a) / sizeof(a[0]);
    int ans = findElementAppearOnce(a, n);
    cout << "ans is " << ans << endl;
}