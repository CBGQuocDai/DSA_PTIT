#include<bits/stdc++.h>
using namespace std;
const int oo=123456789;
typedef long long ll;
int t;
ll n;
ll luythua(int x,ll n)
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
        cin>>n;
        cout<<luythua(2,n-1)<<endl;
    }
}
