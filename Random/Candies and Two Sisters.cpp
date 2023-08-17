#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        int y;
        cin>>y;
        if(y==1||y==2)cout<<"0"<<endl;
        else if(y%2==0)cout<<(y/2)-1<<endl;
        else if(y%2==1)cout<<(y/2)<<endl;
    }
}