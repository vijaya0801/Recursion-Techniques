#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
bool CheckPalindrome(int L,string s)
{
    if(L>=n/2)
    {
        return true;
    }
    if(s[L]!=s[n-L-1])
    {
        return false;
    }
    return CheckPalindrome(L+1,s);
}
int main()
{
   
    string s; cin>>s;
     n=s.size(); int L=0,flag;
    flag=CheckPalindrome(L,s);
    flag==1?cout<<"Palindrome":cout<<"Not Palindrome";
}
