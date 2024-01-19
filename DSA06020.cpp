#include<bits/stdc++.h>
using namespace std;

int t;
int n,a[100005];
int main()
{
    cin>>t;
    while(t--)
    {
        int k;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int ans=-1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==k) {ans=1;break;}
        }
        cout<<ans<<endl;
    }
}
