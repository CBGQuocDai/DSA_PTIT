#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;

int t,n,x;
int a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=1;i<=n;i++) cin>>a[i];
        int j=upper_bound(a+1,a+n+1,x)-a;
        if(j==1) cout<<"-1"<<endl;
        else cout<<j-1<<endl;
    }
}
