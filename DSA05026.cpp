#include<bits/stdc++.h>
using namespace std;

int n,w;
int a[105];
int f[105][25005];
int main()
{
    cin>>w>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
        f[i][0]=0;
    for(int i=0;i<=w;i++) f[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            f[i][j]=f[i-1][j];
            if(j-a[i]>0) f[i][j]=max(f[i][j],f[i-1][j-a[i]] +a[i]);
        }
    }
    cout<<f[n][w]<<endl;
}
