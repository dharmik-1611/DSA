#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
bool hashTable[MAX + 1][2];
bool search(int x)
{
    if (x >= 0)
    {
        if (hashTable[x][0] == 1)
            return true;
        else
            return false;
    }
    else
    {
        if (hashTable[abs(x)][1] == 1)
            return true;
        else
            return false;
    }
}
void hashInsert(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            hashTable[a[i]][0] = 1;
        }
        else
        {
            hashTable[abs(a[i])][1] = 1;
        }
    }
}
int main()
{
    int arr[] = {-3, -333, 5, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    hashInsert(arr, n);
    int find = -333;
    if (search(find))
        cout << "Element is found" << endl;
    else
        cout << "Element is not found" << endl;
    return 0;
}