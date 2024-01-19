#include<bits/stdc++.h>
using namespace std;
const int maxn=1e7+5;
int t;
int n,k;
vector<int> s;
map<int,int> m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        s.clear();
        m.clear();
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            m[x]=i;
            s.push_back(x);
        }
        while(s[0]>s[n-1])
        {
            int x=s[0];
            s.erase(s.begin());
            s.push_back(x);
        }
        int j=lower_bound(s.begin(),s.end(),k)-s.begin();
        cout<<m[s[j]]<<endl;
    }
}
