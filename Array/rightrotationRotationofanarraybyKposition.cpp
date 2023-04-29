
#include <bits/stdc++.h>
using namespace std;
void rotatearrayRight(vector<int> &a, int n, int d)
{
    reverse(a.begin() + (n - d), a.begin() + n);
    reverse(a.begin(), a.begin() + (n - d));
    reverse(a.begin(), a.begin() + n);
}
int main()
{
    int n, d;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> a;
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << endl;
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << endl;
    cout << "Enter tht number of positions which you want to right rotations " << endl;
    cin >> d;
    rotatearrayRight(a, a.size(), d);
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
