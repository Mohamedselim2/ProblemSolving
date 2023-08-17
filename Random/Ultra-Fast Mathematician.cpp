#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
  str x,y;
  cin>>x>>y;
  int a[x.length()],i;
  for(i=0;i<x.length();i++)
  {
    if(x[i]==y[i]){a[i]=0;cout<<a[i];}
    else if(x[i]!=y[i]){a[i]=1;cout<<a[i];}
  }
  
  // for(i=0;i<x.length();i++)
  // {
  //   cout<<a[i];
  // }
}