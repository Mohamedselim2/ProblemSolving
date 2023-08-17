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
    str s1,s2;  cin>>s1>>s2;
    if(s1.length()!=s2.length()){cout<<max(s1.length(),s2.length());}
    else if(s1.length()==s2.length() && s1!=s2) {cout<<max(s1.length(),s2.length());}
    else cout<<"-1";
}