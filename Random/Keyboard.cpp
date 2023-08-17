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
    str l1="qwertyuiop" , l2="asdfghjkl;" , l3="zxcvbnm,./" , s , x;  
    cin>>s>>x;
    for(int i=0;i<x.length();i++)
    {
        for(int c=0;c<10;c++)
        {
            if(s[0]=='R')
            {
                if     (x[i]==l1[c]){cout<<l1[c-1];break;}
                else if(x[i]==l2[c]){cout<<l2[c-1];break;}
                else if(x[i]==l3[c]){cout<<l3[c-1];break;}
            }

            if(s[0]=='L')
            {
                if     (x[i]==l1[c]){cout<<l1[c+1];break;}
                else if(x[i]==l2[c]){cout<<l2[c+1];break;}
                else if(x[i]==l3[c]){cout<<l3[c+1];break;}
            }
        }
    }
}