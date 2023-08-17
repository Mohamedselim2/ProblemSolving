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
    int x,c1=0,c2=0;  cin>>x;
    str s;   
    if(x==1){cin>>s;cout<<s;return 0;}
    str c[x],v1,v2;
    for (int i = 0; i<x; i++)
    {
        cin>>c[i];
    }

    for (int i = 0; i<x; i++)
    {

        if(c[0]==c[i]){c1++;v1=c[i];}
        else {c2++;v2=c[i];}
    }

    if(c2<c1){cout<<v1;}
    else if(c2>c1) {cout<<v2;}
}