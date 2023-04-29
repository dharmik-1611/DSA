/* Given array of N integers , Given Q queries and in each query given L and R print sum of array elements from index L to R (L,R include)*/
/* Constraints
1 <= N <= 10^5
1 <=a[i] <= 10^9
1 <= Q <= 10^5
1 <=L , R<=N 
*/
#include<bits/stdc++.h>
using namespace std;
const int N =1e5 +10;
int a[N];
int pf[N];
int main()
{
    int n ;
    cin>>n;
    for(int i = 1 ; i<= n ;i++)
    {
        cin>>a[i];
        pf[i]= pf[i-1] + a[i];
    }
        int q;
        cin>>q;
        while(q--)
        {
            int l , r;
            cin>>l>>r;
            cout<<pf[r]-pf[l-1]<<endl;
        }
    
}
/* Given array of N integers. Given N Queries and in each Query given a number X , print count of that number in array */
/* Constraints
1 <= N <= 10^5
1 <=a[i] <= 10^7
1 <=Q <=10^5
*/ 
// better approch
// in one second only 10^7 ooperation complete here operation needed 10^12 so we must optimized the solution
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e7 +10;
// int hasharr[N];
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0 ; i<n;i++)
//     {
//         cin>>a[i];
//         hasharr[a[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int x;
//         cin>>x;
//         cout<<hasharr[x]<< endl;
//     }
// }
//brute force approch
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     int a[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int q ;
//     cin>>q;
//     while(q--)
//     {
//         int x;
//         cin>>x;
//         int ct = 0 ;
//         for(int i = 0; i < n; i++)
//         {
//             if(a[i]==x)
//             {
//                 ct++;
//             }
//         }
//         cout<<ct<<endl;
//     }
// }
/*Given T test cases and each test cases a number N . Print its Factorial for each test case % M when M = 10^9 + 7  */
/*Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/
// here this examples is a peactice of pre computational method in which we reduce the time complexity from O(n^2) to O(n)

// brute force approch

// #include <bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 7;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long fact = 1;
//         for (int i = 2; i <= n; i++)
//         {
//             fact = (fact * i) % M;
//         }
//         cout << fact << endl;
//     }
// }

// better approch
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 10;
// const int M = 1e9 + 7;
// long long fact[N];

// int main()
// {
//     fact[0] = fact[1] = 1;
//     for (int i = 2; i < N; i++)
//     {
//         fact[i] = (fact[i - 1] * i) % M;
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << fact[n] << endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int itemCount = 0;
// int N = 5;
// class CircularQueue
// {
// private:
//     int front;
//     int rear;
//     int arr[5];

// public:
//     CircularQueue()
//     {
//         front = -1;
//         rear = -1;
//         for (int i = 0; i < 5; i++)
//         {
//             arr[i] = 0;
//         }
//     }
//     bool isEmpty()
//     {
//         if (front == -1 && rear == -1)
//             return true;
//         else
//             return false;
//     }
//     bool isFull()
//     {
//         if ((rear + 1) % N == front)
//             return true;
//         else
//             return false;
//     }
//     void enqueue(int val)
//     {
//         if (isFull())
//         {
//             cout << "Queue is Full " << endl;
//             return;
//         }
//         else if (isEmpty())
//         {
//             front = 0;
//             rear = 0;
//             arr[rear] = val;
//         }
//         else
//         {
//             rear = (rear + 1) % N;
//             arr[rear] = val;
//         }
//         itemCount++;
//     }
//     int dequeue()
//     {
//         int x = 0;
//         if (isEmpty())
//         {
//             cout << "Queue is empty!" << endl;
//             return 0;
//         }
//         else if (front == rear)
//         {
//             x = arr[rear];
//             rear = -1;
//             front = -1;
//             itemCount--;
//             return x;
//         }
//         else
//         {
//             cout << "front value: " << front << endl;
//             x = arr[front];
//             arr[front] = 0;
//             front = (front + 1) % 5;
//             itemCount--;
//             return x;
//         }
//     }
//     int count()
//     {
//         return (itemCount);
//     }
//     void display()
//     {
//         cout << "All values are in the queue are" << endl;
//         for (int i = 0; i < 5; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// };
// int main()
// {
//     CircularQueue q1;
//     int value, option;

//     do
//     {
//         cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
//         cout << "1. Enqueue()" << endl;
//         cout << "2. Dequeue()" << endl;
//         cout << "3. isEmpty()" << endl;
//         cout << "4. isFull()" << endl;
//         cout << "5. count()" << endl;
//         cout << "6. display()" << endl;
//         cout << "7. Clear Screen" << endl
//              << endl;

//         cin >> option;

//         switch (option)
//         {
//         case 0:
//             break;
//         case 1:
//             cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
//             cin >> value;
//             q1.enqueue(value);
//             break;
//         case 2:
//             cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
//             break;
//         case 3:
//             if (q1.isEmpty())
//                 cout << "Queue is Empty" << endl;
//             else
//                 cout << "Queue is not Empty" << endl;
//             break;
//         case 4:
//             if (q1.isFull())
//                 cout << "Queue is Full" << endl;
//             else
//                 cout << "Queue is not Full" << endl;
//             break;
//         case 5:
//             cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
//             break;
//         case 6:
//             cout << "Display Function Called - " << endl;
//             q1.display();
//             break;
//         case 7:
//             system("cls");
//             break;
//         default:
//             cout << "Enter Proper Option number " << endl;
//         }

//     } while (option != 0);

//     return 0;
// }