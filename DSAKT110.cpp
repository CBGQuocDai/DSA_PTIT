#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t,n,a[maxn];
int f[maxn][2];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        f[0][0]=0;
        f[0][1]=0;
        f[1][1]=a[1];
        f[1][0]=0;
        for(int i=2;i<=n;i++)
        {
            f[i][0]=max(f[i-1][0],f[i-1][1]);
            f[i][1]=f[i-1][0]+a[i];
        }
        cout<<max(f[n][1],f[n][0])<<endl;
    }
}
