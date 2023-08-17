#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    int i,x=0,y;
    str s;
    cin>>y>>s;
    for(i=0;i<s.length();i++){
        if(s[i]==s[i+1])x++;}
    cout<<x;
}