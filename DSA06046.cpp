#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t,n;
int a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int ans=a[2]-a[1];
        for(int i=2;i<n;i++)
            ans=min(a[i+1]-a[i],ans);
        cout<<ans<<endl;
    }
}
