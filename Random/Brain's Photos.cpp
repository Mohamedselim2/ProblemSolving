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
    int rows,colums,b=0;    cin>>rows>>colums;
    str s;
    for(int i=0;i<rows;i++)
    {
        for(int c=0;c<colums;c++)
        {
            cin>>s;
            if(s=="C"|| s== "M" || s== "Y" ){b=1;}
        }
    }

    if(b==0)cout<<"#Black&White";
    else cout<<"#Color";
}