#include <iostream>
#include <bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int x , i ;
    char n ;
    int a[2]={0} ;
    cin >> x ;
    for(i=1;i<=x;i++)
    {
        cin >> n ;
        if (n=='0') a[0]++;
        if (n=='1') a[1]++;
    }
    if(a[0]>=a[1]) cout<<a[0]-a[1]<<endl;
    else cout << a[1]-a[0];

}