#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int a[50];
vector<int> tmp;
vector<vector<int>> ans;
int xx[50];
void xuly(int x,int sum)
{
    for(int i=xx[x-1]; i<=n; i++)
    {
        if(sum+a[i]>m) return ;
        if(sum+a[i]==m)
        {
            tmp.push_back(a[i]);
            ans.push_back(tmp);
            tmp.pop_back();
            return ;
        }
        tmp.push_back(a[i]);
        xx[x]=i;
        xuly(x+1,sum+a[i]);
        tmp.pop_back();
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        xx[0]=1;
        sort(a+1,a+n+1);
        xuly(1,0);
        if(ans.size()==0) cout<<-1<<endl;
        else
        {
            cout<<ans.size();
            for(auto x:ans)
            {
                cout<<" {";
                for(int i=0; i<x.size()-1; i++)
                    cout<<x[i]<<" ";
                cout<<x.back()<<"}";
            }
            cout<<endl;
        }
        ans.clear();
    }
}
