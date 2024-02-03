#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
int n=2,k;
struct MaTran
{
    ll data[3][3];
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
        cin>>k;
        a.data[1][1]=1;
        a.data[1][2]=1;
        a.data[2][1]=1;
        a.data[2][2]=0;
        MaTran c=xuly(k,a);
        cout<<c.data[1][2]<<endl;

    }
}

