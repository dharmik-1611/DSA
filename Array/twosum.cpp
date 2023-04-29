#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> mpp;
    int n, target, count = 0;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the target sum " << endl;
    cin >> target;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter array element of index " << i << endl;
        cin >> x;
        a[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        int no = a[i];
        int more = target - no;
        if (mpp.find(more) != mpp.end())
        {
            count++;
        }
        mpp[no] = i;
    }
    cout << "Final answer is " << count << endl;
    cout << count << endl;
}