#include<bits/stdc++.h>
using namespace std;
int t;

int n,m;
vector<int> a[1004];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
        }
        for(int i=1;i<=n;i++)
        {
            sort(a[i].begin(),a[i].end());
            cout<<i<<": ";
            for(auto x:a[i])
                cout<<x<<" ";
            cout<<endl;
            a[i].clear();
        }
    }
}
