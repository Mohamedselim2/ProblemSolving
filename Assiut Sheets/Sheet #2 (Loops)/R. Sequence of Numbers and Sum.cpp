#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y,sum=0,c,i,k;
//k=1;k<=3;k++
while(cin>>x>>y)
{
    if (x<=0||y<=0 )
         {return 0;}


    if(x>=y)
    { 
        for(c=y;c<=x;c++)
        {
            cout<<c<<" ";
            sum+=c;
        }
         cout<<"sum ="<<sum<<endl;
         sum=0;
    }



    else
    { 
        for(c=x;c<=y;c++)
        {
            cout<<c<<" ";
            sum+=c;
        }
         cout<<"sum ="<<sum<<endl;
         sum=0;
    }
} 
}