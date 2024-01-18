#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+4;
int t;
int n,m;
set<int> a;
vector<int> b;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        for(int i=1;i<=m;i++)
        {
            int x;
            cin>>x;
            if(a.find(x)!=a.end())
            {
                b.push_back(x);
            }
            else {
                a.insert(x);
            }
        }
        for(auto y:a)
            cout<<y<<" ";
        cout<<endl;
        for(auto y:b)
            cout<<y<<" ";
        cout<<endl;
        a.clear();
        b.clear();
    }
}
