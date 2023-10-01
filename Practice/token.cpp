#include <bits/stdc++.h>
using namespace std;
bool isPresent(int element, vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == element)
            return true;
    }
    return false;
}
int main()
{
    int expiryLimit, commandSize;
    cout << "Enter the expiry limit" << endl;
    cin >> expiryLimit;
    cout << "Enter the command size" << endl;
    cin >> commandSize;
    vector<vector<int>> v(commandSize, vector<int>(3, -1));
    map<int, int> mp;
    vector<int> temp;
    int count = 0;
    for (int i = 0; i < commandSize; i++)
    {
        cout << "Enter the token type, token_id, timeLimit" << endl;
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            if (v[i][0] == 0 && j == 2)
            {
                v[i][j] = x + expiryLimit;
                temp.push_back(v[i][1]);
            }
            else if (v[i][0] != 0 && j == 2)
            {
                if (isPresent(v[i][1], temp) && x <= v[i][j])
                {
                    v[i][j] = expiryLimit + x;
                }
            }
            else
            {
                v[i][j] = x;
            }
        }
        // v.push_back(temp);
    }
    cout << "Your Input is " << endl;
    for (int i = 0; i < commandSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}