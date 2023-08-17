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
    int x;      cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    sort(arr,arr+x);
    for(int i=1;i<x-1;i++)
    {
        if(arr[0]<arr[i] && arr[x-1]>arr[i]){c++;}
    }
    cout<<c;
}