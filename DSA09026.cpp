#include<bits/stdc++.h>
using namespace std;
int t,m,n,u,v;
int cx[1003];
int pre[1003];
vector<int> a[1003];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>u>>v;
        for(int i=1;i<=n;i++) cx[i]=1,pre[i]=0;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
        }
        queue<int> q;
        q.push(u);
        cx[u]=0;
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            for(auto x:a[k])
            {
                if(cx[x]==1)
                    q.push(x),cx[x]=0,pre[x]=k;
            }
        }
        int now=v;
        stack<int> st;
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
        for(int i=1;i<=n;i++) a[i].clear();
    }
}

