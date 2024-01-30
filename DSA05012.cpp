#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int t,n,k;
int c[1004][1004];
void xuly()
{
    c[0][1]=1;
    c[1][1]=1;
    for(int i=2;i<=1000;i++)
    {
        c[0][i]=1;
        for(int j=1;j<=1000;j++)
        {
            c[j][i]=(c[j-1][i-1]%mod+c[j][i-1]%mod)%mod;
        }
    }
}
int main()
{
    cin>>t;
    xuly();
    while(t--)
    {
        cin>>n>>k;
        cout<<c[k][n]<<endl;
    }
}
