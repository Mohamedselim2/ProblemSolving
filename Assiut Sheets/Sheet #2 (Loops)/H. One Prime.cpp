#include <iostream>
#include <bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int x , nx , y=0;
    cin >> x ;
    nx = x - 1 ;
    for(int i=2;i<=nx;i++)
    {
        if(x%i==0) 
        {
            cout<<"NO";
            y++;
            break;
        }
    }
    if (y==0) cout <<"YES";
}