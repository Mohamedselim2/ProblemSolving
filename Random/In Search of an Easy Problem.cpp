#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
  int pn,i,s=0;   cin>>pn;   int v[pn];
  for(i=0;i<pn;i++){cin>>v[i];if(v[i]==0){s++;}}
  if(s==pn)cout<<"EASY";
  else cout<<"HARD";
}