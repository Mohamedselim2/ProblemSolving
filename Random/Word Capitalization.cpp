#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    str x;
    cin>>x;
    if(65<=x[0]&&x[0]<=90)cout<<x;
    else {x[0]=toupper(x[0]);cout<<x;}
}