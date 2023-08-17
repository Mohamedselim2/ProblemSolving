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
    int lim;  cin>>lim;
    int arr1[lim],arr2[lim],carr[lim];
   for(int i=0;i<lim;i++)
    {
        cin>>arr1[i]>>arr2[i];
        carr[i]=arr1[i];
    }
    
    for(int i=0;i<lim;i++)
    {
        if(arr1[i]!=arr2[i]){cout<<"rated";return 0;}
    }
    sort(carr,carr+lim);
    reverse(carr,carr+lim);
    for(int i=0;i<lim;i++)
    {
        if(arr1[i]!=carr[i]){cout<<"unrated";return 0;}
    }
    cout<<"maybe";
}