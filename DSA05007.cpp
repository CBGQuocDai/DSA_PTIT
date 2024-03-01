#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;

int t,n,a[maxn];
int f[maxn];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        f[1]=a[1];
        f[2]=max(a[1],a[2]);
        for(int i=3;i<=n;i++)
            f[i]=max(f[i-1],f[i-2]+a[i]);
        cout<<f[n]<<endl;
    }
}
