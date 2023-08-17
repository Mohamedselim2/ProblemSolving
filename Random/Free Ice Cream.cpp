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
    ll n,pack,i,num,counter=0;   char s;
    cin>>n>>pack;
    for (i=0;i<n;i++)
    {
        cin>>s>>num;
        if(s=='+'){pack+=num;}
        else if(s=='-' && pack>=num){pack-=num;}
        else if(s=='-' && pack<num){counter++;}
    }
    cout<<pack<<" "<<counter;
}