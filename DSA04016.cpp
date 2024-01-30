#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t;
int n,m,k;
int a[maxn],b[maxn];

int main()
{
    cin>>t;
    while (t--)
    {
        cin>>n>>m>>k;
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=m; i++) cin>>b[i];
        vector<int> ans;
        int i=1;
        int j=1;
        while(i<=n&&j<=m)
        {
            if(a[i]<b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<=n)
        {
            ans.push_back(a[i]);
            i++;
        }
        while(j<=m)
        {
            ans.push_back(b[j]);
            j++;
        }
        cout<<ans[k-1]<<endl;
        ans.clear();
    }
}

