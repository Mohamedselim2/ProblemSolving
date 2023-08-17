#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x , n1 , n2 ;
cin >> x ;
for (int c=1;c<=x;c++)
{
    cin >> n1 >> n2 ; 
    if (n1==1||n2==1) 
    {
        cout <<"YES" << endl ;
    }
    else if (n1==2&&n2==2) cout<<"YES"<<endl ;
    else cout<<"No"<<endl ;
}

}