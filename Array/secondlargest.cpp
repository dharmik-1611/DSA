#include <bits/stdc++.h>
using namespace std;
int secondLargest(int a[], int n)
{
    int flargest = a[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > flargest)
        {
            slargest = flargest;
            flargest = a[i];
        }
        else if (a[i] < flargest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
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

    cout << "Second largest is " << secondLargest(a, n) << endl;
}
// Time complexity = O(2N)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n, largest = -19999, secondLargest = -1;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter array element of index " << i << endl;
//         cin >> x;
//         largest = max(largest, x);
//         a[i] = x;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > secondLargest && a[i] != largest)
//         {
//             secondLargest = a[i];
//         }
//     }
//     cout << "Second largest is " << secondLargest << endl;
// }
// Time complexity = O(NlogN) + O(N)
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {

//     int n, largest = -19999, secondLargest = -1;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter array element of index " << i << endl;
//         cin >> x;
//         largest = max(largest, x);
//         a[i] = x;
//     }
//     sort(a, a + n);
//     cout << "Sorted array is " << endl;
//     for (int &s : a)
//         cout << " " << s << endl;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (a[i] != largest)
//         {
//             secondLargest = a[i];
//             break;
//         }
//     }
//     cout << "Second largest is " << secondLargest << endl;
// }