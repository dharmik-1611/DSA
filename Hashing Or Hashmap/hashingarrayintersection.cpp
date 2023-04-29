// #include <bits/stdc++.h>
// #include<time.h>
// using namespace std;
// long long int fact (long long int n)
// {
//     int fact = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// // long long int fact (long long int n)
// // {
// //     if(n==0)
// //     {
// //         return 1;
// //     }
// //     return n*fact(n-1);//12=2e-06
// // }
// int main()
// {
//     long long int n ;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     clock_t start,end;
//     double time_spend;
//     start = clock();
//     long long int ans = fact(n);
//     end=clock();
//     time_spend=(double)(end-start)/CLOCKS_PER_SEC;
//     cout<<"ans is "<<ans<<endl;
//     cout<<"time spend is "<<time_spend<<endl;

// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the size of first array"<<endl;
    cin>>n1;
    cout<<"Enter the size of second array"<<endl;
    cin>>n2;
    set<int>s1;
    set<int>s2;
    vector<int>ans;
    int res = 0;
    cout<<"Enter the elements of first array"<<endl;
    for(int i = 0 ; i<n1 ; i++)
    {
        int a ;
        cin>>a;
        s1.insert(a);
    }
    cout<<"Enter the elements of second array"<<endl;
    for(int i = 0 ; i<n2 ; i++)
    {
        int a ;
        cin>>a;
        s2.insert(a);
    }
    for(auto it = s1.begin() ; it != s1.end() ; it++)
    {
        int w = *it;
        if(s2.find(w)!=s2.end())
        {
            res++;
            ans.push_back(w);
        }
    }
    cout<<endl;
    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Result is "<<res<<endl;
}