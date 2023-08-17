#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int x,i,Anton=0,Danik=0;
    char y ;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>y;
        if(y=='D')Danik++;
        else Anton++;
    }
    if(Danik>Anton)cout<<"Danik";
    else if(Anton>Danik)cout<<"Anton";
    else cout<<"Friendship";
}