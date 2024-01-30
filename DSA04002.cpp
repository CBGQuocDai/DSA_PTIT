#include<bits/stdc++.h>
using namespace std;
const int oo=1e9+7;
typedef long long ll;
int t;
ll n,m;
ll luythua(ll x,ll n)
{
    if(n==1) return x;
    if(n==0) return ll(1);
    ll f=(luythua(x,n/2)%oo);
    f=(f*f)%oo;
    if(n%2==0)  return f;
    else return (f*x)%oo;
}
int main()
{
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        m=k;
        n=0;
        while(k!=0)
        {
            n=n*10+k%10;
            k=k/10;
        }
        cout<<luythua(m,n)<<endl;
    }
}
