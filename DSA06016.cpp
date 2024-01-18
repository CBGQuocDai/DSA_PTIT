#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t;
int n,m;
long long a[maxn],b[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=m;i++) cin>>b[i];
        long long u=*max_element(a+1,a+n+1);
        long long v=*min_element(b+1,b+m+1);
        cout<<u*v<<endl;
    }
}
