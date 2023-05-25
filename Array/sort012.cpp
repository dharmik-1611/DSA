#include <bits/stdc++.h>
using namespace std;
void sort012(vector<int> &nums, int n)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
int main()
{
    int n;
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
    sort012(a, n);
    for (int &s : a)
    {
        cout << s << " ";
    }
}
// Brute force
//  #include <bits/stdc++.h>
//  using namespace std;
//  void sort012(vector<int> &a, int n)
//  {
//      int ct0 = 0;
//      int ct1 = 0;
//      int ct2 = 0, i = 0;
//      for (int i = 0; i < n; i++)
//      {
//          if (a[i] == 0)
//          {
//              ct0++;
//          }
//          else if (a[i] == 1)
//          {
//              ct1++;
//          }
//          else if (a[i] == 2)
//          {
//              ct2++;
//          }
//      }
//      while (ct0 > 0)
//      {
//          a[i] = 0;
//          i++;
//          ct0 -= 1;
//      }
//      while (ct1 > 0)
//      {
//          a[i] = 1;
//          i++;
//          ct1 -= 1;
//      }
//      while (ct2 > 0)
//      {
//          a[i] = 2;
//          i++;
//          ct2 -= 1;
//      }
//  }
//  int main()
//  {
//      int n;
//      cout << "Enter the size of the array " << endl;
//      cin >> n;
//      vector<int> a;
//      cout << "Enter the array elements " << endl;
//      for (int i = 0; i < n; i++)
//      {
//          cout << "Enter element " << endl;
//          int x;
//          cin >> x;
//          a.push_back(x);
//      }
//      cout << endl;
//      sort012(a, n);
//      for (int &s : a)
//      {
//          cout << s << " ";
//      }
//  }