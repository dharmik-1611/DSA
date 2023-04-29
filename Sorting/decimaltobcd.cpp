// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to convert Decimal to BCD
void BCDConversion(int n)
{
    // Base Case
    if (n == 0)
    {
        cout << "0000";
        return;
    }

    // To store the reverse of n
    int rev = 0;

    // Reversing the digits
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    // Iterate through all digits in rev
    while (rev > 0)
    {

        // Find Binary for each digit
        // using bitset
        bitset<4> b(rev % 10);

        // Print the Binary conversion
        // for current digit
        cout << b << ' ';

        // Divide rev by 10 for next digit
        rev /= 10;
    }
}

// Driver Code
int main()
{
    // Given Number
    int N = 123;

    // Function Call
    BCDConversion(N);
    return 0;
}
