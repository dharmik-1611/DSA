// *
// *  *
// *  *  *
// *  *  *  *
// *  *  *  *  *
// *  *  *  *  *  *
// *  *  *  *  *  *  *
// *  *  *  *  *  *  *  *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= 5; i++)
//     {
//         int count = 10;
//         for (int j = 1; j <= 5 - i + 1; j++)
//         {
//             cout << count << " ";
//             count--;
//         }
//         cout << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    while (n != 0)
    {
        for (int i = 1; i <= 5; i++)
        {
            int temp = count + 4;
            if (i % 2 == 0)
            {
                if (n != 0)
                {
                    for (int j = 1; j <= 5; j++)
                    {
                        cout << count << " ";
                        count++;
                        n--;
                    }
                    cout << endl;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (n != 0)
                {
                    for (int j = 1; j <= 5; j++)
                    {
                        cout << temp << " ";
                        temp--;
                        count++;
                        n--;
                    }
                    cout << endl;
                }
                else
                {
                    break;
                }
            }
        }
    }
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
// 7 7 7 7 7 7 7

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
// 22 23 24 25 26 27 28
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     int count = 1;
//     for(int i = 1 ; i <= n ; i++)
//     {
//         for(int j = 1 ; j <= i ; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

// 6
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// 6 7 8 9 10 11
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int value = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << value << " ";
//             value++;
//         }
//         cout << endl;
//     }
// }

// 5
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int val = i;
//         for (int j = 1; j <= i; j++)
//         {
//             //i-j+1 is also worked
//             // cout<<i-j+1<<" ";
//             cout << val << " ";
//             val--;
//         }
//         cout << endl;
//     }
// }

// 5
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A' + i - 1;
//         for (int j = 1; j <= n; j++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// 5
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             char ch = 'A' + j - 1;
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// 7
// A B C D E F G
// H I J K L M N
// O P Q R S T U
// V W X Y Z A B
// C D E F G H I
// J K L M N O P
// Q R S T U V W
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char start = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << start << " ";
//             start++;
//             if (start > 'Z')
//             {
//                 start = 'A';
//             }
//         }
//         cout << endl;
//     }
// }

// 5
// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // char start = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }

// 6
// A
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // char start = 'A';
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// 5
// A
// B C
// C D E
// D E F G
// E F G H I
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // char start = 'A';
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             char ch = 'A' + i  + j - 2;

//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// 7
// G
// F G
// E F G
// D E F G
// C D E F G
// B C D E F G
// A B C D E F G
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A' + n - i;
//         for (int j = 1; j <= i; j++)
//         {
//             if (ch > 'Z')
//                 ch = 'A';
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         for (int j = 1; j <= i; j++)
//             cout << " * ";
//         cout << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int r;
//     cin >> r;
//     int i, j;
//     for (i = 1; i <= r; i++)
//     {
//         for (j = 1; j <= r + 4; j++)
//         {
//             if (j >= 6 - i && j <= 4 + i)
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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i, j, k = 0;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 9; j++)
//         {
//             if (j >= 6 - i && j <= 4 + i && k)
//             {
//                 cout << "*";
//                 k = 0;
//             }
//             else
//             {
//                 cout << " ";
//                 k = 1;
//             }
//         }
//         cout << endl;
//     }
// }

// Upper bound and lower bound
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cin >> n;
//      vector<int> v(n);
//      for (int i = 0; i < n; i++)
//      {
//          int x;
//          cin >> x;
//          // v.push_back(x);
//          v[i] = x;
//      }
//      sort(v.begin(), v.end());
//      for (int &s : v)
//          cout << s << " ";
//      cout << endl;
//      cout << "Enter the element which you want to find lower_bound and upper_bound" << endl;
//      int b;
//      cin >> b;
//      auto x = lower_bound(v.begin(), v.end(), b);
//      auto y = upper_bound(v.begin(), v.end(), b);
//      cout << " lower_bound is " << *x << endl;
//      cout << " upper_bound is " << *y << endl;
//  }