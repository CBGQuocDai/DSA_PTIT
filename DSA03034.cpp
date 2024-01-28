#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n,m,k;
int a[maxn],b[maxn],c[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int j=1;j<=m;j++) cin>>b[j];
        for(int i=1;i<=k;i++) cin>>c[i];
        sort(a+1,a+n+1);
        sort(b+1,b+m+1);
        sort(c+1,c+k+1);
        int x=1,y=1,z=1;
        vector<int> ans;
        while(x<=n&&y<=m&&z<=k)
        {
            if(a[x]==b[y]&&a[x]==c[z])
            {
                ans.push_back(a[x]);
                x++;
                y++;
                z++;
            }
            else
            {
                int minn=min(a[x],min(b[y],c[z]));
                if(a[x]==minn) x++;
                if(b[y]==minn) y++;
                if(c[z]==minn) z++;
            }
        }
        if(ans.size()==0) cout<<"NO"<<endl;
        else {
        for(auto x: ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;}
    }
}
