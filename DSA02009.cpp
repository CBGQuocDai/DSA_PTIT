#include<bits/stdc++.h>
using namespace std;
int t,n,k,sum;
int a[25];
int cx[25];
int ans=0;
void xuly(int s,int d)
{
    if(ans==1) return;
    if(d==k) {
        ans=1;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(cx[i]==1)
        {
            if(s+a[i]>sum/k) return;
            else
            {
                if(s+a[i]==sum/k)
                {
                    xuly(0,d+1);
                    return;
                }
                else xuly(s+a[i],d);
            }
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        sum=0;
        ans=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            cx[i]=1;
            sum+=a[i];
        }
        sort(a+1,a+n+1);
        if(sum%k!=0)
        {
            cout<<0<<endl;
        }
        else
        {
            xuly(0,0);
            cout<<ans<<endl;
        }
    }
}
