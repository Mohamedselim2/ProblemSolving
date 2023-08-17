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
    str s;
    ll c=0;
    cin>>s;
    for (size_t i=0;i<s.size();i++)
    {
        if(c==0){if(s[i]=='h')c++;}
        else if(c==1){if(s[i]=='e')c++;}
        else if(c==2){if(s[i]=='l')c++;}
        else if(c==3){if(s[i]=='l')c++;}
        else if(c==4){if(s[i]=='o')c++;}

    }
    if(c!=5){cout<<"NO";return 0;}        
    else if(c==5){cout<<"YES";return 0;}
}