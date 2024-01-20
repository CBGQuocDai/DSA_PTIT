#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n,a[maxn],k;
map<int,long long> m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        m.clear();
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        long long ans=0;
        for(auto x:m)
        {
            if(x.first*2==k) ans+=x.second*(x.second-1);
            else ans+=x.second*m[k-x.first];
        }
        cout<<ans/2<<endl;
    }
}
