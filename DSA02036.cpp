#include<bits/stdc++.h>
using namespace std;
const int maxn=20;
int t,n;
int a[20];
int cx[20];
int f[20];

bool cmp(int x,int y)
{
    return x>y;
}
void xuly(int x,int s)
{
    if(x==n+1) return ;
    for(int i=n; i>=1; i--)
    {
        if(cx[i]==1&& a[i]<f[x-1])
        {
            f[x]=a[i];
            cx[i]=0;
            if((s+a[i])%2==1)
            {

                for(int j=1; j<=x; j++)
                {
                    cout<<f[j]<<" ";
                }
                cout<<endl;
            }
            if(x<n)
            {
                xuly(x+1,s+a[i]);
            }
            cx[i]=1;
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        f[0]=1e6;

        for(int i=1; i<=n; i++) cin>>a[i],cx[i]=1;
        sort(a+1,a+n+1,cmp);
        xuly(1,0);
    }
}
