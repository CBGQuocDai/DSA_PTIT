#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
ll n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        queue<ll> q;
        q.push(1);
        int d=0;
        while(true)
        {
            if(q.front()<=n) d++;
            else break;
            ll a=q.front()*10+0;
            ll b=q.front()*10+1;
            q.pop();
            q.push(a);
            q.push(b);
        }
        cout<<d<<endl;
    }
}
