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
    int boxs;   cin>>boxs;
    int arr[boxs];
    for(int i=0;i<boxs;i++)
    {
        cin>>arr[i];
    }
    int ok;     cin>>ok;
    int bn,on;
    for(int i=0;i<ok;i++)
    {
        cin>>bn>>on;
        bn--;
        arr[bn-1]+=on-1;
        arr[bn+1]+=arr[bn]-on;
        arr[bn]=0;    
    }
    for(int i=0;i<boxs;i++)
    {
        cout<<arr[i]<<endl;
    }
}