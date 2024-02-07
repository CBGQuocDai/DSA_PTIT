#include<bits/stdc++.h>
using namespace std;
const int maxn=5004;
typedef long long ll;
int t;
int n;
ll a[maxn],k;
ll ans;
ll xuly()
{
    ans=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            ll x=k-a[i]-a[j];
            if(x<a[j] ) break;
            int g=lower_bound(a+j+1,a+n+1,x)-a;
            ans+=g-j-1;
        }
    }
    return ans;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        cout<<xuly()<<endl;
    }
}

