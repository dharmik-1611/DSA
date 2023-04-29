#include <bits/stdc++.h>
using namespace std;
int decimalToAnyBase(int a, int b)
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
    return ans;
}
int anyBaseToDecimal(int a, int b)
{
    int ans = 0;
    int power = 1;
    while (a != 0)
    {
        int r = a % 10;
        a /= 10;
        ans += r * power;
        power *= b;
    }
    return ans;
}
int main()
{
    int a, b1, b2;
    cout << "Enter the number" << endl;
    cin >> a;
    cout << "Enter base of that number" << endl;
    cin >> b1;
    cout << "Enter second base that you want convert number in to that base" << endl;
    int decimal = anyBaseToDecimal(a, b1);
    int ans = decimalToAnyBase(decimal, b2);
    cout << ans << endl;
}