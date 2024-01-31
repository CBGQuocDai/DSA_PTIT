#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int maxn=100000+5;
typedef long long ll;
int t;
int n,k;
ll f[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++) f[i]=0;
        f[1]=1;
        f[0]=1;
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=k; j++)
                if(i-j>=0) f[i]=(f[i]%mod+f[i-j]%mod)%mod;
        }
        cout<<f[n]<<endl;
    }
}
