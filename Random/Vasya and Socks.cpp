#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,y;
    cin>>x>>y;
    if(x==y){cout<<x+1;return 0;}
    else if(x<y){cout<<x;return 0;}
    else if(x>y){for(int i=1;i<=x;i++){if(i%y==0)x++;}cout<<x;} 
}