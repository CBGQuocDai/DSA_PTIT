#include<bits/stdc++.h>
using namespace std;
int t;
int n,k;
int a[105];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                    if(a[i]+a[j]==k) ans++;
            }
        }
        cout<<ans<<endl;
    }
}
