#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
int main(){
    int i,x=0;
    str s,v;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='A' && s[i]!='a' && s[i]!='O' && s[i]!='o' 
        && s[i]!='Y' && s[i]!='y' && s[i]!='E' && s[i]!='e'
        && s[i]!='U' && s[i]!='u' && s[i]!='I' && s[i]!='i'){
            v+='.';
            v+=(char)towlower(s[i]);}}
    cout<<v;}