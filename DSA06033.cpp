#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
typedef pair<int,int> ii;
int t;
int n;
vector<ii> a;
bool cmp(ii x,ii y)
{
    return x<y;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        sort(a.begin(),a.end(),cmp);
        int ans=-1e8;
        int tmp=a[0].second;
        for(int i=1;i<n;i++)
        {
            ans=max(ans,a[i].second-tmp);
            tmp=min(tmp,a[i].second);
        }
        cout<<ans<<endl;
        a.clear();
    }
}
