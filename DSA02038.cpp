#include<bits/stdc++.h>
using namespace std;
int t;
int n, k;
int a[20];
int f[20];

void xuly(int x)
{
    for(int i=f[x-1]+1;i<=n;i++)
    {
        f[x]=i;
        if(x==k)
        {
            for(int j=1;j<=k;j++)
                cout<<a[f[j]]<<" ";
            cout<<endl;
        }
        else xuly(x+1);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        f[0]=0;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        xuly(1);
    }
}
