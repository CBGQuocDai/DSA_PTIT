#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[104];
int f[104];
int ans=0;
void xuly(int x)
{
    for(int i=f[x-1]+1; i<=n-k+x; i++)
    {
        if(a[i]>a[f[x-1]])
        {
            f[x]=i;
            if(x==k)
            {
                ans++;
            }
            else
            {
                xuly(x+1);
            }
        }
    }
}
int main()
{
    cin>>n>>k;
    a[0]=0;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    xuly(1);
    cout<<ans<<endl;
}
