#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;

int t;
int n,a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        int d=1;
        int ans=0;
        int i=1;
        while(i<=n)
        {
            while(a[i]<=a[i+1] &&i<=n) i++,d++;
            while(a[i]>=a[i+1]&& i<=n) i++,d++;
            if(i==n+1) d--;
            ans=max(ans,d);
            d=1;
        }
        cout<<ans<<endl;
    }
}
