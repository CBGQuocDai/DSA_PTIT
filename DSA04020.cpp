#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n,k;
int a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int j=lower_bound(a+1,a+n+1,k)-a;
        if(a[j]==k&&j!=n+1) cout<<j<<endl;
        else cout<<"NO"<<endl;
    }
}
