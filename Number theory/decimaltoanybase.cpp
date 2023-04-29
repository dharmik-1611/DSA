#include <bits/stdc++.h>
using namespace std;
void decimalToAnyBase(int a, int b)
{
    int power = 1;
    int ans = 0;
    while (a != 0)
    {
        int r = a % b;
        a /= b;
        ans += r * power;
        power *= 10;
    }
    cout << ans << endl;
    return;
}
int main()
{
    int a, b;
    cout << "Enter the number " << endl;
    cin >> a;
    cout << "Enter the base " << endl;
    cin >> b;
    decimalToAnyBase(a, b);
}