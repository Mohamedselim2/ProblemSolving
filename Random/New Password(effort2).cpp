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
    int a,b;
    cin>>a>>b;
    char s;     int count=1;
    for( int i=0;i<a;i++,count++)
    {
        
        s='a'+count-1;
        if(count==b){count=0;}
        cout<<s;
    }
}