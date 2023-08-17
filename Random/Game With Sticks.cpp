#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
   int x,y,a=0,m=0,s=0;
   cin>>x>>y;
   while (x!=0 && y!=0)
   {
     x--;
     y--;
     s++;
     if(s%2==1)a++;
     else m++;
   }   
    if(a>m)cout<<"Akshat";
    else cout<<"Malvika";
}