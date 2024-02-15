#include<bits/stdc++.h>
using namespace std;
int t,m,n,u;
int cx[1003];
vector<int> a[1003];
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
        queue<int> q;
        q.push(u);
        cx[u]=0;
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            cout<<k<<" ";
            for(auto x:a[k])
            {
                if(cx[x]==1)
                    q.push(x),cx[x]=0;
            }
        }
        cout<<endl;
        for(int i=1;i<=n;i++) a[i].clear();
    }
}
