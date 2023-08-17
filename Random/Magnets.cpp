#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
  int x,n=0;
  cin>>x;
  int a[x];
  for(int i=0;i<x;i++)
  {
    cin>>a[i];
  }

  for(int i=0;i<x;i++)
  {
    if(a[i]!=a[i+1]) n++;
  }
  cout<<n;
}