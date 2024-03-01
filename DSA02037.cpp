#include<bits/stdc++.h>
using namespace std;
const int oo=1e6+5;
int t,n;
int a[20];
int f[20];
int cx[20];
int p[oo];
void sang()
{
    p[0]=1;
    p[1]=1;
    for(int i=2; i*i<=oo; i++)
        for(int j=i*i; j<=oo; j+=i)
        {
            p[j]=1;
        }
}
void xuly(int x,int s)
{
    for(int i=1;i<=n;i++)
    {
        if(cx[i]==1&& a[i]<f[x-1])
        {
            f[x]=a[i];
            cx[i]=0;
            if(p[s+a[i]]==0)
            {
                for(int j=1;j<=x;j++)
                    cout<<f[j]<<" ";
                cout<<endl;
            }
            if(x<n)xuly(x+1,s+a[i]);
            cx[i]=1;
        }
    }
}
int main()
{
    cin>>t;
    sang();
    while(t--)
    {
        cin>>n;
        f[0]=1e9;
        for(int i=1; i<=n; i++)
            cin>>a[i],cx[i]=1;
        sort(a+1,a+n+1);
        xuly(1,0);
    }
}
