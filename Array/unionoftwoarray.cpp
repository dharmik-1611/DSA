#include <bits/stdc++.h>
using namespace std;
void unionArray(int a[] , int b[] , int n1 , int n2)
{
    int i = 0 ;
    int j = 0 ;
    vector<int>unionArr;
    while()
}
int main()
{
    int n1, n2;
    cout << "Enter the size of the first array" << endl;
    cin >> n1;
    cout << "Enter the size of the second array" << endl;
    cin >> n2;
    cout << "Enter the elements of the first array" << endl;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        int x;
        cout << "Enter the element of first array for index " << i << endl;
        cin >> x;
        a[i] = x;
    }
    cout << "Enter the elements of the second array " << endl;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cout << "Enter the element of second array for index " << i << endl;
        cin >> x;
        b[i] = x;
    }
    unionArray(a, b, n1, n2);
}
// Time complexity is = O(n1logn) + O(n2logn) + O(n1+n2)
// space complexity is = O(n1 + n2) + O(n1 + n2)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n1, n2;
//     set<int> st;
//     vector<int> temp;
//     cout << "Enter the size of the first array" << endl;
//     cin >> n1;
//     cout << "Enter the size of the second array" << endl;
//     cin >> n2;
//     cout << "Enter the elements of the first array" << endl;
//     int a[n1];
//     int b[n2];
//     for (int i = 0; i < n1; i++)
//     {
//         int x;
//         cout << "Enter the element of first array for index " << i << endl;
//         cin >> x;
//         a[i] = x;
//     }
//     cout << "Enter the elements of the second array " << endl;
//     for (int i = 0; i < n2; i++)
//     {
//         int x;
//         cout << "Enter the element of second array for index " << i << endl;
//         cin >> x;
//         b[i] = x;
//     }
//     for (int i = 0; i < n1; i++)
//     {
//         st.insert(a[i]);
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         st.insert(b[i]);
//     }
//     for (auto it : st)
//     {
//         temp.push_back(it);
//     }
//     for (auto it : temp)
//     {
//         cout << it << " ";
//     }
// }