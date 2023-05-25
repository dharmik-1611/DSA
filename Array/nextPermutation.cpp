#include <bits/stdc++.h>
using namespace std;
int main()

{
    vector<int> v{2, 1, 3, 4, 6, 9, 8};
    next_permutation(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // sort(arr, arr + 3);
    // cout << "The 3! possible permutations with 3 elements:\n";
    // do
    // {
    //     cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    // } while (next_permutation(arr, arr + 3));

    // cout << "After loop: " << arr[0] << ' '
    //      << arr[1] << ' ' << arr[2] << '\n';
}