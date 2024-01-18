#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n,m;
int a[maxn];
int b[maxn];
int d[5];
int xuly(int x)
{
    int ans=0;
    if(x==0) return 0;
    if(x==1) return d[0];
    int j=upper_bound(b+1,b+m+1,x)-b;
    ans+=m-j+1+d[1]+d[0];
    if(x==2)
        ans-=(d[3]+d[4]);
    if(x==3)
        ans+=d[2];
    return ans;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=m;i++)
            cin>>b[i];
        for(int i=0;i<5;i++) d[i]=0;
        sort(b+1,b+m+1);
        for(int i=1;i<=m;i++)
            if(b[i]<5) d[b[i]]++;
        int res=0;
        for(int i=1;i<=n;i++)
        {
            res+=xuly(a[i]);
        }
        cout<<res<<endl;
    }
}
