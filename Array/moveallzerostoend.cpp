// Time Complexity O(N) and space complexity O(1)
#include <bits/stdc++.h>
using namespace std;
void moveAllZerosToTheEnd(int a[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
}
int main()
{
    int a[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int d = 3;
    moveAllZerosToTheEnd(a, size);
    cout << "new updated array is " << endl;
    for (int &s : a)
    {
        cout << s << " ";
    }
}
// Time complexity O(2N) and space complexity O(N)
// #include <bits/stdc++.h>
// using namespace std;
// void moveAllZerosToTheEnd(int a[], int n)
// {
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != 0)
//         {
//             temp.push_back(a[i]);
//         }
//     }
//     for (int i = 0; i < temp.size(); i++)
//     {
//         a[i] = temp[i];
//     }
//     for (int i = temp.size(); i < n; i++)
//     {
//         a[i] = 0;
//     }
// }
// int main()
// {
//     int a[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int size = sizeof(a) / sizeof(a[0]);
//     int d = 3;
//     moveAllZerosToTheEnd(a, size);
//     cout << "new updated array is " << endl;
//     for (int &s : a)
//     {
//         cout << s << " ";
//     }
// }
// Time complexity O(N^2) and space complexity O(1)
// #include <bits/stdc++.h>
// using namespace std;
// void moveAllZerosToTheEnd(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[j] != 0)
//                 {
//                     swap(a[j], a[i]);
//                     break;
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     int a[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int size = sizeof(a) / sizeof(a[0]);
//     int d = 3;
//     moveAllZerosToTheEnd(a, size);
//     cout << "new updated array is " << endl;
//     for (int &s : a)
//     {
//         cout << s << " ";
//     }
// }