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
    int cards;  cin>>cards;
    int arr[cards],s=0,d=0;
    for(int i=0;i<cards;i++)
    {
        cin>>arr[i];
    }

    int h=0,f=cards-1;
    for(int i=0;i<cards;i++)
    {
        if(i%2==0)
        {
            s+=max(arr[h],arr[f]);
            if(arr[h]>=arr[f]){h++;}
            else {f--;}
        }

        else if (i%2==1) 
        {
            d+=max(arr[h],arr[f]);
            if(arr[h]>=arr[f]){h++;}
            else {f--;}
        }
    }
    cout<<s<<" "<<d;
}