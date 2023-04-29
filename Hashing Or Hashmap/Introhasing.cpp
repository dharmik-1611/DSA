//count frequency of each character in given string using map
#include<bits/stdc++.h>
using namespace std;
void  printFrequency_of_each_character(string &str)
{
    unordered_map<char,int>m;
    for(int i = 0 ; i<str.size();i++)
    {
        if(m.find(str[i])==m.end())
        {
           m.insert(make_pair(str[i],1));
        }
        else
        {
            m[str[i]]++;
        }
    }
    for(auto &it:m)
    {
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}
int main()
{
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    printFrequency_of_each_character(str);
}
// count frequency of each word in given string using hashing.
// #include <bits/stdc++.h>
// using namespace std;
// void printFrequency(string str)
// {
//      map<string, int> m;
//     string word = "";
//     cout<<"str size in frequency function "<<str.size()<<endl;
//     for (int i = 0; i<str.size(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             if (m.find(word) == m.end())
//             {
//                 m.insert(make_pair(word, 1));
//                 word = "";
//             }
//             else
//             {
//                 m[word]++;
//                 word = "";
//             }
//         }
//         else
//         {
//             word += str[i];
//         }
//     }
//     if (m.find(word) == m.end())
//     {
//         m.insert(make_pair(word, 1));
//     }
//     else
//     {
//         m[word]++;
//     }
//     for (auto &it : m)
//     {
//         cout << it.first << " -> " << it.second << endl;
//     }
// }
// int main()
// {
//     string str;
//     cout<<"Enter the string "<<endl;
//     getline(cin,str);
//     cout<<"str size in main "<<str.size()<<endl;
//     printFrequency(str);
   
//     return 0;
// }