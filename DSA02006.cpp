#include<bits/stdc++.h>
using namespace std;
int t,n;
int k;
int a[15];
int b[15];
int tmp=0;
vector<vector<int>> res;
void xuly(int x)
{
    for(int i=1; i>=0; i--)
    {
        b[x]=i;
        tmp+=i*a[x];
        if(x==n)
        {
            if(tmp==k)
            {
                vector<int> ans;
                for(int j=1; j<=n; j++)
                    if(b[j]==1) ans.push_back(a[j]);
                res.push_back(ans);
            }
        }
        else
        {

            if(tmp<=k) xuly(x+1);
        }
        tmp-=i*a[x];
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        tmp=0;
        cin>>n>>k;
        res.clear();
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        xuly(1);
        if(res.size()==0)
            cout<<"-1"<<endl;
        else
        {
            for(int j=0; j<res.size(); j++)
            {
                cout<<"[";
                for(int i=0; i<res[j].size()-1; i++)
                    cout<<res[j][i]<<" ";
                cout<<res[j][res[j].size()-1]<<"] ";
            }
            cout<<endl;
        }
    }
}
