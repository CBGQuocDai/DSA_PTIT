#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
const int oo=1e5+5;
int t;
int m,n,a[maxn][maxn];
int cx[maxn][maxn];
struct ii
{
    int x,y,dem;
};

int main()
{
    cin>>t;
    while(t--)
    {
        queue<ii> q;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>a[i][j],cx[i][j]=1;
        q.push({1,1,0});
        int ans=oo;
        while(!q.empty())
        {
            ii tmp=q.front();
            q.pop();
            int u=tmp.x+a[tmp.x][tmp.y];
            int v=tmp.y+a[tmp.x][tmp.y];
            if(tmp.x==n&&tmp.y==m)
            {
                ans=min(ans,tmp.dem);
                break;
            }
            if(cx[tmp.x][v]==1&&v<=m)

            {
                q.push({tmp.x,v,tmp.dem+1});
                cx[tmp.x][v]=0;
            }
            if(cx[u][tmp.y]==1&& u<=n)
            {
                q.push({u,tmp.y,tmp.dem+1});
                cx[tmp.x][v]=0;
            }
        }
        if(ans==oo) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
}
