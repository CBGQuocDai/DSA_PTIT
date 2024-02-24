#include<bits/stdc++.h>
using namespace std;
int t,n,k,s;
int p[205];
vector<int> nto;
int m;
void sang()
{
    p[0]=1;
    p[1]=1;
    for(int i=2; i*i<=200; i++)
    {
        if(p[i]==0)
        {
            for(int j=i*i; j<=200; j+=i)
                p[j]=1;
        }
    }
    for(int i=1;i<=200;i++)
    {
        if(p[i]==0) nto.push_back(i);
    }

}
int x[20];
int vt;
vector<int> tmp;
vector<vector<int>> ans;

void xuly(int i,int sum)
{
    for(int j=x[i-1]+1;j<=m;j++)
    {
        x[i]=j;

        if(sum+nto[j]> s) return ;
        tmp.push_back(nto[j]);
        if(i==n)
        {
                if(sum+nto[j]==s) ans.push_back(tmp);
        }
        else
        {
            xuly(i+1,sum+nto[j]);
        }
        tmp.pop_back();
    }
}
int main()
{
    cin>>t;
    sang();
    m=nto.size();
    while(t--)
    {
        cin>>n>>k>>s;
        vt=upper_bound(nto.begin(),nto.end(),k)-nto.begin();
        x[0]=vt-1;
        xuly(1,0);
        cout<<ans.size()<<endl;
        for(auto x:ans)
        {
            for(int i=0;i<x.size();i++)
                cout<<x[i]<<" ";
            cout<<endl;
        }
        tmp.clear();
        ans.clear();
    }
}
