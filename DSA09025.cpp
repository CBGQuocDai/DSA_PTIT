#include<bits/stdc++.h>
using namespace std;
int t,m,n,u,v;
int cx[1003];
vector<int> a[1003];
int pre[1003];
void dfs(int x)
{
    cx[x]=0;
    for(auto y:a[x])
    {
        if(cx[y]==1)
        {
            pre[y]=x;
            dfs(y);
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>u>>v;
        for(int i=1; i<=n; i++) cx[i]=1;
        for(int i=1; i<=m; i++)
        {
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
        }
        dfs(u);
        stack<int> st;
        int now=v;
        if(pre[now]==0) cout<<"-1"<<endl;
        else
        {
            while(true)
            {
                st.push(now);
                now=pre[now];
                if(now==0) break;
            }
            while(!st.empty())
            {
                cout<<st.top()<<" ";
                st.pop();
            }
            cout<<endl;
        }
        for(int i=1; i<=n; i++)
            pre[i]=0;
        for(int i=1; i<=n; i++) a[i].clear();
    }
}
