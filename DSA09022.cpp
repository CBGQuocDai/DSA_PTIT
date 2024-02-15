#include<bits/stdc++.h>
using namespace std;
int t,m,n,u;
int cx[1003];
vector<int> a[1003];
void dfs(int x)
{
    cx[x]=0;
    cout<<x<<" ";
    for(auto y:a[x])
    {
        if(cx[y]==1)
            dfs(y);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>u;
        for(int i=1;i<=n;i++) cx[i]=1;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
        }
        dfs(u);
        cout<<endl;
        for(int i=1;i<=n;i++) a[i].clear();
    }
}
