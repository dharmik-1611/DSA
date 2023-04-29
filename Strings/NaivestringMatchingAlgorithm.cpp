// #include <bits/stdc++.h>
// using namespace std;

// // A function that will compute the longest possible proper prefix and proper suffix
// void computeLongestProperPrefixSuffix(string pat, int m, int *longestProperPrefSuf)
// {
//     // length of the previous longest prefix suffix
//     int length = 0;

//     longestProperPrefSuf[0] = 0;

//     // calculating the longest possible proper prefix and proper suffix for i = 1 to m-1
//     int i = 1;
//     while (i < m)
//     {
//         if (pat[i] == pat[length])
//         {
//             // if matches increment the length
//             length++;
//             longestProperPrefSuf[i] = length;
//             i++;
//         }
//         else
//         {
//             // if the length is not zero, redefining the length of the longestProperPrefSuf
//             if (length != 0)
//                 length = longestProperPrefSuf[length - 1];

//             else
//             {
//                 // when the length is 0
//                 longestProperPrefSuf[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

// // a function that prints occurrences of pattern[] in text[]
// void searchPattern(string pattern, string text, int m, int n)
// {
//     /*
//     defining array that will store the longest possible proper prefix and proper suffix.
//     */
//     int longestProperPrefSuf[m];

//     // calculating the longest possible proper prefix and proper suffix
//     cout << "calculateLongestProperPrefsuf function called" << endl;
//     computeLongestProperPrefixSuffix(pattern, m, longestProperPrefSuf);

//     // initializing both the pointers.
//     int i = 0;
//     int j = 0;
//     while ((n - i) >= (m - j))
//     {
//         // increment the pointer until the match is found.
//         if (pattern[j] == text[i])
//         {
//             j++;
//             i++;
//         }

//         // If the match is completely found.
//         if (j == m)
//         {
//             cout << "The pattern was found at the index: " << i - j << endl;
//             return;

//             j = longestProperPrefSuf[j - 1];
//         }

//         // when mismatch after j matches
//         else if (i < n && pattern[j] != text[i])
//         {
//             if (j != 0)
//                 j = longestProperPrefSuf[j - 1];
//             else
//                 i = i + 1;
//         }
//     }
//     cout << "No match found!" << endl;
// }

// /* The main function */
// int main()
// {
//     string text = "Scaler Topics";
//     string pattern = "Topics";
//     searchPattern(pattern, text, pattern.size(), text.size());

//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;
// // void searchPattern(string pattern, string text, int m, int n)
// // {
// //     for (int i = 0; i <= n - m; i++)
// //     {
// //         int j;
// //         for (j = 0; j < m; j++)
// //         {
// //             if (text[i + j] != pattern[j])
// //                 break;
// //         }
// //         if (j == m)
// //         {
// //             cout << "The pattern found at index " << i << endl;
// //         }
// //     }
// // }
// // int main()
// // {
// //     string text = "AABAACAADAABAAABAA";
// //     string pattern = "AABA";
// //     searchPattern(pattern, text, pattern.size(), text.size());
// //     return 0;
// // }