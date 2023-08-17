#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll a,x,y,i,o;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>x>>y;
        if(x%y==0)cout<<"0"<<endl;  
        else if( y>x ){ cout<<y-x<<endl; }

        else{
            o=x/y;
            while( x>y*o )
            {
                o++;
            }
            cout<<y*o-x<<endl;}
    }
}
