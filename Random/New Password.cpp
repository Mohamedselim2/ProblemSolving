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
    int a,b;    cin>>a>>b;
    char s;
    while (a--)
    {
        s='a'+(a%b);
        cout<<s;
    }
}