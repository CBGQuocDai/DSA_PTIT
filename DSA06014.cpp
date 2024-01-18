#include<bits/stdc++.h>
using namespace std;
const int maxx=1e6+5;
int t;
int n;
int p[maxx];
vector<int> nto;
void sang()
{
    p[0]=1;
    p[1]=1;
    for(int i=2;i*i<=maxx;i++)
    {
        for(int j=i*i;j<=maxx;j+=i)
            p[j]=1;
    }
    for(int i=1;i<=maxx;i++)
        if(p[i]==0) nto.push_back(i);
}

int main()
{
    cin>>t;
    sang();
    while(t--)
    {
        cin>>n;
        int f=1;
        for(auto x:nto)
        {
            auto j=lower_bound(nto.begin(),nto.end(),n-x);
            if(j==nto.end()) continue;
            if(*j==n-x)
            {
                cout<<x<<" "<<n-x<<endl;
                f=0;
                break;
            }
        }
        if(f==1) cout<<"-1"<<endl;
    }
}
