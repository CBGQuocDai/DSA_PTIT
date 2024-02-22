#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+3;
int n,m,t,q;
int d;
int cx[maxn];
vector<int> a[maxn];
int ans[maxn];
void dfs(int x)
{
    cx[x]=0;
    ans[x]=d;
    for(auto y: a[x])
    {
        if(cx[y]==1)
        {
            dfs(y);
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cx[i]=1;
            ans[i]=0;
            a[i].clear();
        }
        for(int i=1;i<=m;i++)
        {
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        d=1;
        for(int i=1;i<=n;i++)
        {
            if(cx[i]==1)
                dfs(i),d++;
        }
        cin>>q;
        while(q--)
        {
            int u,v;
            cin>>u>>v;
            if(ans[u]==ans[v]&&ans[u]!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
