#include<bits/stdc++.h>
using namespace std;
const int maxn =205;
int t;
int n,a[maxn];
int f[40004],s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(int i=1; i<=s; i++) f[i]=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        f[0]=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=s;j>=a[i]; j--)
            {
                if(f[j]==1) continue;
                f[j]=f[j-a[i]];
            }
        }
        if(f[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
