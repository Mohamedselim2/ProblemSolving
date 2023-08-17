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
    str s,t;    cin>>s>>t;
    int i,c=0;
    for(i=0;i<t.length();i++)
    {
        if(s[c]==t[i]){c++;}
    }
    cout<<c+1;
}