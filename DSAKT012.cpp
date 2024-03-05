#include<bits/stdc++.h>
using namespace std;
const int maxn=35;
int n,s;
int a[maxn];
int ans=1e9+5;
void xuly(int x,int sum,int d)
{
    if(sum>s) return ;
    for(int i=0; i<=1; i++)
    {
        if(x==n)
        {
            if(sum+a[x]*i==s)
                ans=min(ans,d+i);
        }
        else
        {
            if(d+i<=ans)
                xuly(x+1,sum+i*a[x],d+i);
        }
    }
}
int main()
{
    cin>>n>>s;
    for(int i=1; i<=n; i++) cin>>a[i];
    xuly(1,0,0);
    if(ans==1e9+5) cout<<"-1"<<endl;
    else cout<<ans<<endl;
}
