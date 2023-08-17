#include <bits/stdc++.h>
using namespace std;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x; cin>>x;
    priority_queue<int,vector<int>,greater<>>pq;
    long long s=0;
    int a=x;
    while (x--)
    {
        int n;  cin>>n;
        s+=x;
        pq.push(x);
        if(s<0)
        {
            s-=pq.top();
            pq.pop();
            a--;
        }
        cout<<a<<'\n';

    }
    return 0;
}