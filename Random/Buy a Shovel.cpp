#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<cmath>
#include<ctime>
typedef long long ll;
using namespace std;
typedef string str;
typedef double dou;
typedef long l;
int main()
{
    int price,spcoin,sum,v=1000,c=1;
    cin>>price>>spcoin;
    while(v--)
    {
        sum=price*c;
        if(sum%10==0){cout<<c;return 0;}
        else if(sum==(sum-spcoin)+(sum%10)){cout<<c;return 0;}
        else {c++;}
    }  
}