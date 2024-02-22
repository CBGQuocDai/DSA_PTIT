#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+3;
int t,n,v;
int a[maxn],c[maxn];
int f[maxn][maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>v;
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++) cin>>c[i];
        f[0][0]=0;
        for(int i=1; i<=n; i++)
            f[i][0]=0;
        for(int i=1; i<=v; i++) f[0][i]=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=v; j++)
            {
                f[i][j]=f[i-1][j];
                if(a[i]<=j)
                {
                    f[i][j]=max(f[i][j],f[i-1][j-a[i]]+c[i]);
                }
            }
        }
        cout<<f[n][v]<<endl;
    }
}
