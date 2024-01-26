#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+4;
typedef pair<int,int> ii;
int t,n;
ii a[maxn];
bool cmp(ii u,ii v)
{
    return u.second< v.second;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i].first;
        for(int i=1;i<=n;i++)
            cin>>a[i].second;
        sort(a+1,a+n+1,cmp);
        ii now =a[1];
        int ans=1;
        for(int i=2;i<=n;i++)
        {
            if(a[i].first>=now.second)
            {
                now=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

