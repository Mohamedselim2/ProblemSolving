#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,i,n1,n2,n3 ;
cin>>x;
for(i=1;i<=x;i++)
{
    cin>>n1>>n2>>n3;
    if(n1==n2&&n1>n3)cout<<(n1-n1)+1<<" "<<(n2-n2)+1<<" "<<(n1-n3)+1<<endl;
    else if(n2==n3&&n2>n1)cout<<(n2-n1)+1<<" "<<(n2-n2)+1<<" "<<(n3-n3)+1<<endl;
    else if(n3==n1&&n3>n2)cout<<(n1-n1)+1<<" "<<(n3-n2)+1<<" "<<(n3-n3)+1<<endl;

    else if(n1==n2&&n2==n3)cout<<(n1-n1)+1<<" "<<(n2-n2)+1<<" "<<(n3-n3)+1<<endl;

    else if(n1>n2&&n1>n3)cout<<n1-n1<<" "<<(n1-n2)+1<<" "<<(n1-n3)+1<<endl;
    else if(n2>n1&&n2>n3)cout<<(n2-n1)+1<<" "<<n2-n2<<" "<<(n2-n3)+1<<endl;
    else if(n3>n1&&n3>n2)cout<<(n3-n1)+1<<" "<<(n3-n2)+1<<" "<<n3-n3<<endl;
}
}