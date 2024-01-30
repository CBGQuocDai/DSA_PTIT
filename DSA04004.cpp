#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n;
ll k;
int xuly(int n,ll k)
{
    ll x= pow(2,n-1);
    if(k==x) return n;
    if(k<x) return xuly(n-1,k);
    if(k>x) return xuly(n-1,k-x);
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<xuly(n,k)<<endl;
    }
}
