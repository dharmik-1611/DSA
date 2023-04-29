#include <bits/stdc++.h>
using namespace std;
int totalUnique(int a[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[i] != a[j])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{

    int n, count = 0;
    set<int> s;
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
    cout << totalUnique(a, n) << endl;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n, count = 0;
//     set<int> s;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter array element of index " << i << endl;
//         cin >> x;
//         a[i] = x;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(a[i]);
//     }
//     int index = 0;
//     for (auto it : s)
//     {
//         a[index] = it;
//         index++;
//     }
//     cout << "total unique elements is " << index << endl;
// }