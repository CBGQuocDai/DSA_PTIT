#include<bits/stdc++.h>
using namespace std;
int t,n,s;
int a[35];
int ans;
void xuly(int x,int tmp,int d)
{
    if(tmp>s) return;
    for(int i=0;i<=1;i++)
    {
        if(x==n)
        {
            if(tmp+i*a[x]==s)
            {
                ans=min(ans,d+i);
                return ;
            }
        }
        else
        {
            if(d<=ans)
                xuly(x+1,tmp+i*a[x],d+i);
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        ans=1e9+5;
        for(int i=1;i<=n;i++) cin>>a[i];
        xuly(1,0,0);
        if(ans==1e9+5) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
}
