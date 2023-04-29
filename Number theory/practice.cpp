
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;

// Convert 24-hour time to 12-hour time
string convertTime(string timeStr)
{
    int hour, minute, second;
    char delimiter;
    stringstream ss(timeStr);
    ss >> hour >> delimiter >> minute >> delimiter >> second;
    string period = "AM";
    if (hour >= 12)
    {
        period = "PM";
        if (hour > 12)
        {
            hour -= 12;
        }
    }
    if (hour == 0)
    {
        hour = 12;
    }
    stringstream result;
    result << setw(2) << setfill('0') << hour << ":"
           << setw(2) << setfill('0') << minute << ":"
           << setw(2) << setfill('0') << second << " " << period;
    return result.str();
}

int main()
{
    // Open the input and output files
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    // Read the number of test cases
    int numCases;
    inputFile >> numCases;

    // Process each test case
    for (int i = 0; i < numCases; i++)
    {
        string timeStr;
        inputFile >> timeStr;
        string convertedTime = convertTime(timeStr);
        outputFile << convertedTime << endl;
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool is_valid(int x, int y, int n, int m)
// {
//     // check if the given position is within the grid boundaries
//     if (x < 0 || x >= n || y < 0 || y >= m)
//     {
//         return false;
//     }
//     return true;
// }

// bool traverse_path(int x, int y, int n, int m, vector<string> &commands)
// {
//     // create a 2D boolean grid to keep track of visited positions
//     vector<vector<bool>> visited(n, vector<bool>(m, false));

//     // mark the starting position as visited
//     visited[x][y] = true;

//     // loop through the commands and move the robot accordingly
//     for (auto cmd : commands)
//     {
//         char direction = cmd[0];
//         int steps = stoi(cmd.substr(2));

//         // update the position based on the current command
//         if (direction == 'N')
//         {
//             x -= steps;
//         }
//         else if (direction == 'S')
//         {
//             x += steps;
//         }
//         else if (direction == 'W')
//         {
//             y -= steps;
//         }
//         else if (direction == 'E')
//         {
//             y += steps;
//         }

//         // check if the new position is valid and not already visited
//         if (!is_valid(x, y, n, m) || visited[x][y])
//         {
//             return false;
//         }

//         // mark the new position as visited
//         visited[x][y] = true;
//     }

//     // check if the robot has visited all the positions in the grid
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!visited[i][j])
//             {
//                 return false;
//             }
//         }
//     }

//     // return true if the robot has visited all the positions in the grid
//     return true;
// }

// int main()
// {
//     int n, m, x, y, k;
//     cin >> n >> m >> x >> y >> k;

//     vector<string> commands(k);
//     for (int i = 0; i < k; i++)
//     {
//         cin >> commands[i];
//     }

//     if (traverse_path(x, y, n, m, commands))
//     {
//         cout << "True\n";
//     }
//     else
//     {
//         cout << "False\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// double rounded(double n, int d)
// {
//     double factor = pow(10, d);
//     double rounded_num = (n * factor) + 0.5;
//     int integer_part = (int)rounded_num;
//     return (double)integer_part / factor;
// }
// int main()
// {
//     double n;
//     int d;
//     cout << "Enter the number " << endl;
//     cin >> n;
//     cout << "Enter the decimal places " << endl;
//     cin >> d;
//     double rounded_num = n > 0 ? rounded(n, d) : rounded(n * -1, d);
//     if (n > 0)
//         cout << "The number " << n << "rounded to "
//              << "decimal places " << d << "  and finally number is " << rounded_num << endl;
//     else
//         cout << "The number " << n << "rounded to "
//              << "decimal places " << d << "  and finally number is " << -1 * rounded_num << endl;
// }