#include<bits/stdc++.h>
using namespace std;
int main()
{
    //when we want to input string as a whole sentence then keep it mind following things
    // string s;
    // cin>>s;
    // cout<<s<<endl;
    //here suppose we enterd input string as a "dharmik dharmik" and press enter then output will be only dharmik because cin terminated when space or new line is occured//
    

    // if we want to fix these things then we can use inbuilt c++ function getline(cin,stringName) then string will cover whole sentence

    // string str;
    // getline(cin,str);//input : dharmik dharmik
    // cout<<str<<endl; //output : dharmik dharmik

    //calculation order
    // 1. Double
    // 2. Float
    // 3. Long Long Int
    // 4. Long Int
    // 5. Int
    // 6. Characters

    // suppose we perform following operations
    // cout<<7/2<<endl;  //3
    // cout<<7/2.0<<endl; 3.5 answer in float because operation will be done in big datatype between two here big datatype means order of calculation of float is greater then int so answer will be return in float//

    //we are checking palidrome string then
    // int t ;
    // cout<<"Enter the number of string which you want to enter "<<endl;
    // cin>>t;
    // cin.ignore();//here cin.ignore() function is used to ignore space or new line after taking input test cases most important
    // while(t--)
    // {
    //     string s;
    //     getline(cin,s);
    //     string rev_s;
    //     for(int i = s.size() - 1 ; i>=0 ;i--)
    //     {
    //         rev_s.push_back(s[i]);
    //     }
    //     cout<<"original string is "<<s<<endl;
    //     cout<<"reversed string is "<<rev_s<<endl;
    // }

    cout<<'c' + 1<<endl;//100 because int > char in calculation order then ascii value of c is 99 and adding 1 then output is 100
    cout<<3* 7/2<<endl;//operator precedenced is left to right and same for */ % so here first 3*7 = 21 and 21/2 = 10
    cout<<7/2 *3<<endl;////operator precedenced is left to right and same for */ % so here first 7/2 = 3 and 3*3 = 9

      int a = 100000;
      int b = 100000;
    // long int c = a * b; // here calculation are in to int but 10^5 * 10^5 = 10^10 that is out of range because integer range is [-10^9 << int 10^9] so overflow occurs
      long int c = a * 1LL * b ; // this line gives us output as 10^10 here this compiler old so not correct but online compiler gives it correct answer here 1ll means multiply into long long int

    cout<<c<<endl;
    cout<<INT16_MAX<<endl;
    cout<<INT32_MAX<<endl;
    cout<<INT64_MAX<<endl;
    
}