#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n;
ll k;
long long f[95];
char xuly(int n,ll k)
{
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=f[n-2]) return xuly(n-2,k);
    return xuly(n-1,k-f[n-2]);
}
int main()
{
    cin>>t;
    f[1]=1;
    f[0]=0;
    for(int i=2;i<=92;i++) f[i]=f[i-1]+f[i-2];
    while(t--)
    {
        cin>>n>>k;
        cout<<xuly(n,k)<<endl;
    }
}
