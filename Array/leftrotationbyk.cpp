#include <bits/stdc++.h>
using namespace std;
void rotatearrayLeft(int a[], int n, int d)
{
    reverse(a, a + d);
    // cout << "after reversing from a to a+ d array is " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    reverse(a + d, a + n);
    // cout << "after reversing from a+d to a+n array is " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    reverse(a, a + n);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);
    int d = 3;
    rotatearrayLeft(a, size, d);
    cout << "new updated array is " << endl;
    for (int &s : a)
    {
        cout << s << " ";
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// void leftRotateBykPosition(int a[], int n, int d)
// {
//     d = d % n;
//     int temp[d];
//     for (int i = 0; i <= d; i++)
//     {
//         temp[i] = a[i];
//     }
//     cout << "temp array is " << endl;
//     for (int s : temp)
//         cout << " " << s;
//     cout << endl;
//     for (int i = d; i < n; i++)
//     {
//         a[i - d] = a[i];
//     }
//     for (int i = n - d; i < n; i++)
//     {
//         a[i] = temp[i - (n - d)];
//     }
//     cout << "new updated array is " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int main()
// {
//     int n, d;
//     cout << "Enter the size of the array: " << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter the array element for index " << i << endl;
//         cin >> x;
//         a[i] = x;
//     }
//     cout << "Enter the d position which you want to left rotate" << endl;
//     cin >> d;
//     int size = sizeof(a) / sizeof(a[0]);
//     leftRotateBykPosition(a, size, d);
// }
// #include <bits/stdc++.h>
// using namespace std;
// void leftRotateBykPosition(int a[], int n, int d)
// {
//     int p = 1;
//     while (p <= d)
//     {
//         int last = a[0];
//         for (int i = 0; i < n - 1; i++)
//         {
//             a[i] = a[i + 1];
//         }
//         a[n - 1] = last;
//         cout << "now array is " << endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//         p++;
//         cout << "value of p is " << p << endl;
//     }
// }
// int main()
// {
//     int n, d;
//     cout << "Enter the size of the array: " << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cout << "Enter the array element for index " << i << endl;
//         cin >> x;
//         a[i] = x;
//     }
//     cout << "Enter the d position which you want to left rotate" << endl;
//     cin >> d;
//     int size = sizeof(a) / sizeof(a[0]);
//     leftRotateBykPosition(a, size, d);
//     cout << "new updated array is " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// Naive approach using another array
//  #include <bits/stdc++.h>
//  using namespace std;
//  void leftRotateBykPosition(int a[], int n, int d)
//  {
//      int temp[n];
//      int k = 0;
//      for (int i = d; i < n; i++)
//      {
//          temp[k] = a[i];
//          k++;
//      }
//      for (int i = 0; i < d; i++)
//      {
//          temp[k] = a[i];
//          k++;
//      }
//      for (int i = 0; i < n; i++)
//      {
//          a[i] = temp[i];
//      }
//      return;
//  }
//  int main()
//  {
//      int n, d;
//      cout << "Enter the size of the array: " << endl;
//      cin >> n;
//      int a[n];
//      for (int i = 0; i < n; i++)
//      {
//          int x;
//          cout << "Enter the array element for index " << i << endl;
//          cin >> x;
//          a[i] = x;
//      }
//      cout << "Enter the d position which you want to left rotate" << endl;
//      cin >> d;
//      int size = sizeof(a) / sizeof(a[0]);
//      leftRotateBykPosition(a, size, d);
//      cout << "new updated array is " << endl;
//      for (int i = 0; i < n; i++)
//      {
//          cout << a[i] << " ";
//      }
//  }