#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[55];
int s[55];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        s[0]=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        sort(a+1,a+n+1);
        for(int i=1; i<=n; i++)
            s[i]=s[i-1]+a[i];
        int ans=max(s[n]-2*s[k],s[n]-2*s[n-k]);
        cout<<ans<<endl;
    }
}
