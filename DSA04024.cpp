#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
int n,k;
struct MaTran
{
    ll data[20][20];
} a;
MaTran nhan(MaTran a,MaTran b)
{
    MaTran c;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            c.data[i][j]=0;
            for(int u=1; u<=n; u++)
                c.data[i][j]+=(a.data[i][u]*b.data[u][j])%mod;
            c.data[i][j]=c.data[i][j]%mod;
        }
    }
    return c;
}
MaTran xuly(int m,MaTran a)
{
    if(m==1) return a;
    MaTran b=nhan(a,a);
    MaTran c=xuly(m/2,b);
    if(m%2==0) return c;
    else return nhan(c,a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++) cin>>a.data[i][j];
        MaTran c=xuly(k,a);
        ll tmp=0;
        for(int i=1; i<=n; i++)
            tmp=(tmp%mod+c.data[i][n]%mod)%mod;
        cout<<tmp<<endl;
    }
}
