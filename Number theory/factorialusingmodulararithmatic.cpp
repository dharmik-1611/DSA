
// #include <bits/stdc++.h>
// using namespace std;
// int lower_bound(vector<int> &v, int element)
// {
//     int lo = 0;
//     int hi = v.size() - 1;
//     while (hi - lo > 1)
//     {
//         int mid = (hi + lo) / 2;
//         if (v[mid] < element)
//         {
//             lo = mid + 1;
//         }
//         else
//         {
//             hi = mid;
//         }
//     }
//     if (v[lo] >= element)
//     {
//         cout << "Enter in condition of lower" << endl;
//         return lo;
//     }
//     else if (v[hi] >= element)
//     {
//         cout << "Enter in condition of upper" << endl;
//         return hi;
//     }
//     else
//     {
//         cout << " NOT FOUND ELEMENT" << endl;
//         return -1;
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter size of the array" << endl;
//     cin >> n;
//     vector<int> v(n);
//     cout << "Enter array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int element;
//     cout << "Enter elements which you want to find lower_bound and upper_bound of it" << endl;
//     cin >> element;
//     int ans = lower_bound(v, element);
//     cout << "element " << v[ans] << " at index " << ans << endl;
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int M = 47;
// // int main()
// // {
// //     int n ;
// //     cin>>n;
// //     long long int fact = 1;
// //     for(int i = 2 ; i<=n ; i++)
// //     {
// //         fact = (fact*i)%M;
// //     }
// //     cout<<fact<<endl;
// // }