#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}
int HammingDistance(int a, int b)
{
    return countSetBits(a ^ b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Hamming distance between these two numbers are " << HammingDistance(a, b) << endl;
}