#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+4;
int t,n;
typedef pair<int,int> ii;
vector<ii> v;
map<int,int> m;
bool cmp(ii x,ii y)
{
    if(x.first==y.first)
        return x.second<y.second;
    else return x.first>y.first;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        for(auto x:m)
        {
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x:v)
        {
            for(int i=1;i<=x.first;i++)
                cout<<x.second<<" ";
        }
        cout<<endl;
        m.clear();
        v.clear();
    }
}
