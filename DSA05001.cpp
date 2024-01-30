#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+4;
int t;
string a,b;
int f[maxn][maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        a=" "+a;
        b=" "+b;
        for(int i=0;i<=n;i++)
            for(int j=1;j<=m;j++) f[i][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i]==b[j])
                    f[i][j]=f[i-1][j-1]+1;
                else
                    f[i][j]=max(max(f[i-1][j],f[i][j-1]),f[i-1][j-1]);
            }
        }
        cout<<f[n][m]<<endl;
    }
}
