
#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<string> a;
set<string> s;
int u[20];
void xuly(int x)
{
    for(int i=u[x-1]+1;i<=n-k+x;i++)
    {
        u[x]=i;
        if(x==k)
        {
            for(int j=1;j<=k;j++)
            {
                cout<<a[u[j]-1]<<" ";
            }
            cout<<endl;
        }
        else xuly(x+1);
    }
}
int main()
{
    cin>>n>>k;
    u[0]=0;
    for(int i=1;i<=n;i++)
    {
        string st;
        cin>>st;
        s.insert(st);
    }
    for(auto x:s)
        a.push_back(x);
    n=a.size();
    xuly(1);
}
