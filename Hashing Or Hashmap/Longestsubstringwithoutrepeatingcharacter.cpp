#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(20);
    ms.insert(10);
    ms.insert(20);
    ms.insert(40);
    auto it = ms.equal_range(20);
    cout<<*it.first<<" "<<*it.second<<endl;
    return 0;  
}
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int lengthofLongestSubstring(string s) {
//       vector<int>mpp(256, -1); 
//       int left = 0, right = 0;
//       int n = s.size();
//       int len = 0;
//       while (right < n) {
//         if (mpp[s[right]] != -1)
//           left = max(mpp[s[right]] + 1, left);

//         mpp[s[right]] = right;

//         len = max(len, right - left + 1);
//         right++;
//       }
//       return len;
//     }
// };

// int main() {
//   string str = "takeUforward";
//   Solution obj;
//   cout << "The length of the longest substring without repeating characters is " << obj.lengthofLongestSubstring(str);
//   return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int solve(string &s)
// {
//     int i = 0 ;
//     int j = 0 ;
//     int n = s.length();
//     int maxi = INT_MIN;
//     unordered_set<char>set;
//     while(j<n)
//     {
//         while(set.find(s[j])!= set.end())
//         {
//             set.erase(s[i]);
//             i++;
//         }
//         maxi = max(maxi,j-i+1);
//         set.insert(s[j]);
//         j++;
//     }
//     return maxi;
// }
// int main()
// {
//     string s = "takeUforward";
//     cout<<"The length of the longest substring without repeating character is "<<solve(s)<<endl;
// }
//1st approach time complexity is O(n^2) and space complexity is O(n) using hashset
// #include<bits/stdc++.h>
// using namespace std;
// int solve(string &s)
// {
//     cout<<endl;
//     if(s.size()==0) return 0;
//     int maxans = INT_MIN;
//     for(int i = 0 ; i<s.length() ; i++)
//     {
//         unordered_set<int>set;
//         for(int j = i ; j<s.length();j++)
//         {
//             cout<<"for j = "<<j<<endl;
//             for(auto it : set) cout<<(it)<<endl;   
//             if(set.find(s[j])!= set.end())
//             {
//                 maxans=max(maxans,j-i);
//                 break;
//             }
//             else
//             {
//                 set.insert(s[j]);
//             }
//         }
//     }
//     return maxans;
// }
// int main()
// {
//     string s = "takeUforward";
//     cout<<"The length of the longest substring without repeating character is "<<solve(s)<<endl;
// }