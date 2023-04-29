
#include <bits/stdc++.h>
using namespace std;
void rotatearrayRight(int a[], int n, int d)
{
    reverse(a + (n - d), a + n);
    reverse(a, a + (n - d));
    reverse(a, a + n);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);
    int d = 3;
    rotatearrayRight(a, size, d);
    cout << "new updated array is " << endl;
    for (int &s : a)
    {
        cout << s << " ";
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// void rotatearrayRight(int a[], int n, int d)
// {
//     for (int i = 1; i <= d; i++)
//     {
//         int temp = a[n - 1];
//         for (int j = n - 2; j >= 0; j--)
//         {
//             a[j + 1] = a[j];
//         }
//         a[0] = temp;
//     }
//     cout << "new updated array is " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7};
//     int size = sizeof(a) / sizeof(a[0]);
//     int d = 3;
//     rotatearrayRight(a, size, d);
// }
