#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int oo=1e9+7;
ll a;
ll b;
ll xuly(ll x,ll n)
{
    if(n==0) return ll(1);
    ll f=xuly(x,n/2)%oo;
    f=(f*f)%oo;
    if(n%2==0)  return f;
    else return (f*(x%oo))%oo;
}
int main()
{
    while(true)
        {
            cin>>a>>b;
            if(a==0&&b==0) break;
            cout<<xuly(a,b)<<endl;
        }
}
