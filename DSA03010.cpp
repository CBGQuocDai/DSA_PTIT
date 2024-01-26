#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
typedef long long ll;
int t,n;
priority_queue<ll,vector<ll> ,greater<ll> > q;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            q.push(x);
        }
        ll ans=0;
        while(q.size()>1)
        {
            int u=q.top();
            q.pop();
            int v=q.top();
            q.pop();
            ans+=(u+v);
            q.push(u+v);
        }
        cout<<ans<<endl;
        q.pop();
    }
}
