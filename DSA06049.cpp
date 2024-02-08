#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
typedef long long ll;
int t;
int n,a[maxn],k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            int j=lower_bound(a+i+1,a+n+1,a[i]+k)-a;
            ans+=ll(j-i-1);
        }
        cout<<ans<<endl;
    }
}
