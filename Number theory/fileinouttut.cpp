#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream f1;
    f1.open("t1.txt", ios::out);
    if (f1.is_open())
    {
        f1 << "Hello, world!" << endl;
        f1 << "This is a second line of the file" << endl;
    }
}