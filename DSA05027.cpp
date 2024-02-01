#include<bits/stdc++.h>
using namespace std;
const int maxn=1004;
int t;
int n,m;
int a[maxn],c[maxn];
int f[maxn][maxn];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
            cin>>c[i];
        for(int i=0;i<=n;i++)
            f[i][0]=0;
        for(int i=1;i<=m;i++)
            f[0][i]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                f[i][j]=f[i-1][j];
                if(j-a[i]>=0)
                {
                    f[i][j]=max(f[i][j],f[i-1][j-a[i]]+c[i]);
                }
            }
        }
        cout<<f[n][m]<<endl;
    }
}
