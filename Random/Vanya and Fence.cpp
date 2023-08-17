#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
  int n,h,i,s=0;   cin>>n>>h;   int v[n];
  for(i=0;i<n;i++){cin>>v[i];if(v[i]>h){s+=2;}else s++;}
  cout<<s;
}