#include<bits/stdc++.h>
using namespace std;
int n,k;
int cx[12];
int d,w[12][12];
vector<int> a;
vector<vector<int>> ans;
void xuly(int x,int tmp)
{
    if(tmp>k) return;
    for(int i=1;i<=n;i++)
    {
        if(cx[i]==1)
        {
            a[x]=i;
            cx[i]=0;
            if(x==n)
            {
                if(tmp+w[x][i]==k)
                    ans.push_back(a);
            }
            else
            {
                xuly(x+1,tmp+w[x][i]);
            }
            cx[i]=1;
        }
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) cx[i]=1;
    a.resize(n+1,0);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>w[i][j];
    xuly(1,0);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=1;j<=n;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}
