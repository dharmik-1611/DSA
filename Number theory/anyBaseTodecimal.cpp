#include <bits/stdc++.h>
using namespace std;
void anyBaseToDecimal(int a, int b)
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
    cout << ans << endl;
}
int main()
{
    int a, b;
    cout << "Enter the number " << endl;
    cin >> a;
    cout << "Enter the base " << endl;
    cin >> b;
    anyBaseToDecimal(a, b);
}