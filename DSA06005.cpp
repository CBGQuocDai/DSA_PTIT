#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+4;
int t;
int n,m;
int a[maxn];
int b[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        set<int> s;
        vector<int> b;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        int now=0;
        int x;
        for(int i=1; i<=m; i++)
        {
            cin>>x;
            s.insert(x);
            for(int j=1; j<=n; j++)
            {
                if(a[j]==x)
                {
                    if(j>=now)
                    {
                        b.push_back(x);
                        now=j;
                    }
                    break;
                }
            }
        }
        sort(b.begin(),b.end());
        for(auto g:s)
            cout<<g<<" ";
        cout<<endl;
        for(auto g:b)
            cout<<g<<" ";
        cout<<endl;
    }
}
