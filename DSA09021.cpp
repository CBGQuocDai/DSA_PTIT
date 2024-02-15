#include<bits/stdc++.h>
using namespace std;
const int maxn=1004;
int n;
int a[maxn][maxn];
vector<int> ans[maxn];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        if(a[i][j]==1) ans[i].push_back(j);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}
