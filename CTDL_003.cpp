#include<bits/stdc++.h>
using namespace std;
int n,w;
double a[104];
double c[104];
typedef pair<double,int> ii;
ii g[104];
bool cmp(ii x, ii y)
{
    return x>y;
}
int xotp[104],xx[104];
double ans,s;
void xuly(int x,int tmp,int s)
{

    if(s+(w-tmp)*g[x].first<ans) return ;
    for(int i=1;i>=0;i--)
    {
        if(tmp+i*a[g[x].second]<= w)
        {
            xx[g[x].second]=i;
            if(x==n)
            {
                if(s>ans)
                {
                    ans=s;
                    for(int j=1;j<=n;j++) xotp[j]=xx[j];
                }
            }
            else xuly(x+1,tmp+i*a[g[x].second],s+i*c[g[x].second]);
        }
    }
}
int main()
{
    //freopen("data.in","r",stdin);
    cin>>n>>w;
    for(int i=1;i<=n;i++)
        cin>>c[i];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        g[i].first=c[i]/a[i];
        g[i].second=i;
    }
    sort(g+1,g+n+1,cmp);
    xuly(1,0,0);
    cout<<ans<<endl;
    for(int i=1;i<=n;i++)
        cout<<xotp[i]<<" ";
    cout<<endl;
}
