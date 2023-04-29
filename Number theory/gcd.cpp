
#include <bits/stdtr1c++.h>
using namespace std;
int gcd(int a, int b)
{

    // if(b==0) return a;
    // we can also write blike this
    if (a < b)
        return gcd(b, a);
    if (b == 0)
        return a;
    // if(a<b)
    // {
    //     gcd(b,a);
    // }
    return gcd(b, a % b);
}
// Formula of LCM is
// let's say LCM (a,b) = a*b/gcd(a,b)
// minimum fraction of two numbers like 12/18 = 2/3 is also simple as a/gcd(a,b)/b/gcd(a,b)
int main()
{
    int a, b;
    cout << "Enter number a" << endl;
    cin >> a;
    cout << "Enter number b" << endl;
    cin >> b;
    cout << gcd(a, b) << endl;
}