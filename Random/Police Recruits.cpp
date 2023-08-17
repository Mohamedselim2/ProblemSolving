#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,y,crime=0,OfficersRecruited=0,s=0;
    cin>>x;
    while(x--)
    {
        cin>>y;
        if(y<0 && OfficersRecruited==0){crime++;}
        else if(y<0 && OfficersRecruited!=0){OfficersRecruited--;}
        else {OfficersRecruited+=y;}
    }
    cout<<crime;
}