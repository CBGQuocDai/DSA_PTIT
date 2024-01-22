#include<bits/stdc++.h>
using namespace std;

int n,k;
int x[25];
vector<int> a;
set<int>s;
void xuly(int u)
{
    for(int i=x[u-1]+1;i<=n-k+u;i++)
    {
        x[u]=i;
        if(u==k)
        {
            for(int i=1;i<=k;i++)
                cout<<a[x[i]-1]<<" ";
            cout<<endl;
        }
        else xuly(u+1);
    }
}
int main()
{
    cin>>n>>k;
    x[0]=0;
    for(int i=1;i<=n;i++)
    {
        int g;
        cin>>g;
        s.insert(g);
    }
    for(auto g:s)
        a.push_back(g);
    n=s.size();
    xuly(1);
}
