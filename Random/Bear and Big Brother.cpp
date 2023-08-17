#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    int i,wl,wb,x=0;
    cin>>wl>>wb;
    while(wl<=wb)
    {
        wl=wl+wl+wl;
        wb=wb+wb;
        x++;
    }
    cout<<x;
}