#include<bits/stdc++.h>
using namespace std;
int t;
int a[30][30];
int n;
int f[30];
int cx[30]= {1};
int tmp,ans;
int s[30];
void xuly(int x)
{
    for(int i=1; i<=n; i++)
    {
        if(cx[i]==1)
        {
            tmp+=a[x][i];
            cx[i]=0;
            if(x==n)
            {
                if(tmp> ans) ans=tmp;
            }
            else
            {
                if(tmp+(s[n]-s[x])>=ans)
                    xuly(x+1);
            }
            cx[i]=1;
            tmp-=a[x][i];
        }
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++) cin>>a[i][j];
        for(int i=1; i<=n; i++)
        {
            f[i]=0;
            for(int j=1; j<=n; j++) f[i]=max(f[i],a[i][j]);
        }
        s[0]=0;
        for(int i=1; i<=n; i++)
            s[i]=s[i-1]+f[i];
        for(int i=1; i<=n; i++) cx[i]=1;
        tmp=0;
        ans=0;
        xuly(1);
        cout<<ans<<endl;
    }
}
