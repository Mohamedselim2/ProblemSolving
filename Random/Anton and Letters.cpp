#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<cmath>
#include<ctime>
typedef long long ll;
using namespace std;
typedef string str;     
typedef double dou;
typedef long l;
int main()
{
    str s;  getline(cin,s);
    sort(s.begin(),s.end());
    int counter=0;
    for (int i=0;i<s.length();i++)
    {
        if(97<=s[i] && s[i]<=122 &&s[i]!=s[i+1]){counter++;}
    }
    cout<<counter;
}