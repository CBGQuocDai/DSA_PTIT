#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
int t,n;
int a[maxn];
int main()
{
    cin>> t;
    while(t--)
    {
        cin>>n;
        set<int> s;
        int u=100005;
        int v=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
            u=min(u,a[i]);
            v=max(v,a[i]);
        }
        cout<<v-u+1-s.size()<<endl;
    }
}
