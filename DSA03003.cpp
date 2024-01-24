#include<bits/stdc++.h>
using namespace std;
const int oo=1e9+7;
const int maxn=1e6+3;
typedef long long ll;
int n;
ll a[maxn];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            ll tmp= ll(a[i]*(i-1));
            ans=(ans%oo+tmp%oo)%oo;
        }
        cout<<ans<<endl;
    }
}
