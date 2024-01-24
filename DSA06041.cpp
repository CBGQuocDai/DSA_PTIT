#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n,a[maxn];
map<int,int> m;
int main()
{
    cin>>t;
    while(t--)
    {
        m.clear();
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int ans=0;
        for(auto x:m)
        {
            if(x.second>n/2)
            {
                if(x.second>m[ans])
                {
                    ans=x.first;
                }
            }
        }
        if(ans==0) cout<<"NO"<<endl;
        else cout<<ans<<endl;
    }
}
