// #include <stdio.h>
// int main()
// {
//     int rows, i, j, space;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = rows; i >= 1; --i)
//     {
//         for (space = 0; space < rows - i; ++space)
//             printf("  ");
//         for (j = i; j <= 2 * i - 1; ++j)
//             printf("* ");
//         for (j = 0; j < i - 1; ++j)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int rows = 10; // Number of rows in the pattern

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int temp = n;
//     int count = 1;
//     while (temp > 0)
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 int count1 = count + 4;
//                 for (int j = 1; j <= 5; j++)
//                 {
//                     if (temp > 0)
//                     {
//                         cout << count1 << " ";
//                         count1--;
//                         count++;
//                         temp--;
//                     }
//                 }
//                 cout << endl;
//             }
//             else
//             {
//                 for (int j = 1; j <= 5; j++)
//                 {
//                     if (temp > 0)
//                     {
//                         cout << count << " ";
//                         count++;
//                         temp--;
//                     }
//                 }
//                 cout << endl;
//             }
//         }
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool should_i_swap(pair<int,int>a , pair<int,int>b)
// {
//     // if(a.first!=b.first)
//     // {
//     //     if(a.first > b.first) return false;
//     //     return true;
//     // }
//     // else
//     // {
//     //     if(a.second<b.second) return false;
//     //     return true;
//     // }

//     if(a.first!=b.first)
//     {
//         return a.first<b.first;
//     }
//     return a.second > b.second;
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the total numbers of pairs which you want to create "<<endl;
//     cin>>n;
//     vector<pair<int,int>>v(n);
//     for(int i = 0 ; i<n ; i++)
//     {
//         cin>>v[i].first>>v[i].second;
//     }
//     // for(int i = 0 ; i<n ; i++)
//     // {
//     //     for(int j = i+1 ; j<n ; j++)
//     //     {
//     //         if(should_i_swap(v[i],v[j]))
//     //         {
//     //             swap(v[i],v[j]);
//     //         }
//     //     }
//     // }
// //Inbuilt sort function default behaviour is sorting according to accending order but when we write our own comparator function and when we want to swap the element then return false //
//     sort(v.begin(),v.end(),should_i_swap);
//     cout<<"After sorting the pairs "<<endl;
//     for(int i = 0 ; i<n ; i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
//     cout<<endl;
//     return 0;
// }