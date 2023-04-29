#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int> arr, int n)
{
    stack<int> s;
    s.push(0);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() != 0 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallerElement(vector<int> arr, int n)
{
    stack<int> s;
    s.push(0);
    vector<int> ans(n);
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        while (s.top() != 0 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int main()
{
    vector<int> v1({2, 1, 5, 6, 2, 3});
    vector<int> next(v1.size()), pre(v1.size());
    next = nextSmallerElement(v1, v1.size());
    pre = prevSmallerElement(v1, v1.size());
    cout << "next array elements " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << next[i] << " ";
    }
    cout << endl;
    cout << "prev array elements " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;
    int area = INT_MIN;
    for (int i = 0; i < v1.size(); i++)
    {
        int l = v1[i];
        if (next[i] == 0)
            next[i] = v1.size();
        int b = next[i] - pre[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    cout << " max area is " << area << endl;
}