#include<bits/stdc++.h>
using namespace std;
int n,c[20][20];
int cmin=1e9;
int cx[20];
int a[20];
int tmp=0;
int ans=1e9;
void xuly(int x)
{
    for(int i=1; i<=n; i++)
    {
        if(cx[i]==1)
        {
            tmp+=c[a[x-1]][i];
            a[x]=i;
            cx[i]=0;
            if(x==n)
            {
                ans=min(ans,c[i][1]+tmp);
            }
            else
            {
                if(tmp+cmin*(n-x)<=ans)
                {
                    xuly(x+1);
                }
            }
            cx[i]=1;
            tmp-=c[a[x-1]][i];
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin>>c[i][j],cmin=min(cmin,c[i][j]);
    for(int i=1; i<=n; i++) cx[i]=1;
    cx[1]=0;
    a[1]=1;
    xuly(2);
    cout<<ans<<endl;
}
