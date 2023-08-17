#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll n,k,c=0;
    cin>>n>>k;
    ll mb[n];
    for(int i=0;i<n;i++)
    {
        cin>>mb[i];
        if(5-mb[i]>=k){c++;}
    }
    cout<<c/3; 
}