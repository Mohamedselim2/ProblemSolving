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
    int col;    cin>>col;
    int arr[col],mn=101;
    for(int i=0;i<col;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+col);
    for(int i=0;i<col;i++)
    {
        cout<<arr[i]<<" ";
    }
}