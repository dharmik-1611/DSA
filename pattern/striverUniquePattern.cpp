
// p-1
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cin >> n;
//      for (int i = 1; i <= n; i++)
//      {
//          for (int j = 1; j <= (n - i + 1); j++)
//          {
//              cout << "*";
//          }
//          cout << endl;
//      }
//  }

// p-2
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i + 1); j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// p-3
// logic space star space
// logic [n-i+1,2*i+1,n-i+1]
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         //space
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             cout << " ";
//         }
//         //stars
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         }
//         //space
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// p-4
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// p-5 is combination of pattern 3 and pattern 4
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// p - 6
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int stars = i;
//         if (i > n)
//             stars = 2 * n - i;
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// p -7
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 cout << 1 << " ";
//             }
//             else
//             {
//                 cout << 0 << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// p-8
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int space = 2 * (n - 1);
//     for (int i = 1; i <= n; i++)
//     {

//         // numbers
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         // spaces
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // numbers
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//         space -= 2;
//     }
// }

// p -9
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
// }

// p-10
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= (n - i + 1); j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
// }

// p-11
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }
// }

// p-12
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         // space
//         for (int j = 1; j <= n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // characters
//         char ch = 'A';
//         int breakPoint = (2 * i + 1) / 2;
//         for (int j = 1; j <= 2 * i + 1; j++)
//         {
//             cout << ch;
//             if (j <= breakPoint)
//                 ch++;
//             else
//                 ch--;
//         }
//         cout << endl;
//     }
// }

// p-13
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         char start = 'A' + n - i - 1;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << start;
//             start++;
//         }
//         cout << endl;
//     }
// }

// p-14
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int space = 0;
//     for (int i = 0; i < n; i++)
//     {

//         // stars
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*";
//         }
//         // spaces
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*";
//         }
//         space += 2;
//         cout << endl;
//     }
//     int space2 = 2 * n - 2;
//     for (int i = 1; i <= n; i++)
//     {
//         // stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         // spaces
//         for (int j = 1; j <= space2; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         space2 -= 2;
//         cout << endl;
//     }
// }

// p-15
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int space = 2 * n - 2;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int stars = i;
//         if (i > n)
//             stars = 2 * n - i;

//         // stars
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }

//         // spaces

//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         if (i < n)
//             space -= 2;
//         else
//             space += 2;
//     }
// }

// p-16
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == n)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// p -17
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < 2 * n - 1; i++)
//     {
//         for (int j = 0; j < 2 * n - 1; j++)
//         {
//             int top = i;
//             int left = j;
//             int right = (2 * n - 2) - j;
//             int down = (2 * n - 2) - i;
//             cout << (n - min(min(top, down), min(left, right)));
//         }
//         cout << endl;
//     }
// }

// p-18
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = 0;
        int space = n - i;

        // space

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
            k = j;
        }
        // pattern
        int flag = 0;
        int number = i;
        int temp = 2 * i - 1;
        int count = i;
        int no = 0;
        int star = 0;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (count > 0)
            {
                if (flag == 0)
                {
                    cout << number;
                    count -= 1;
                    if (count == 0)
                    {
                        number -= 2;
                        no = number;
                    }
                    else
                    {
                        number += 2;
                    }
                    flag = 1;
                }
                else
                {
                    cout << "*";
                    count -= 1;
                    flag = 0;
                    if (count == 0)
                    {
                        star = 1;
                        number -= 2;
                        star = number;
                    }
                }
            }
            else
            {
                if (star != 0)
                {
                    cout << "*";
                    number -= 2;
                    star = -9000;
                }
                else
                {
                    cout << number;
                    number -= 2;
                }
            }
        }

        // pattern
        // for (int j = i; j >= 1; j--)
        // {
        //     if (i % 2 != 0)
        //     {
        //         if (j % 2 != 0)
        //         {
        //             cout << k;
        //             k += 2;
        //         }
        //         else
        //         {
        //             cout<<"*";
        //         }
        //     }
        //     else
        //     {
        //         if(j%2!=0)
        //         {
        //             cout<<"*";
        //         }
        //         else
        //         {

        //         }
        //     }
        // }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}