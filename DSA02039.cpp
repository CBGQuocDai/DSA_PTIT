#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int f[20];
vector<vector<int>> ans;
void in (int n)
{
    vector<int> tmp;
    for(int i=1; i<=n; i++)
        tmp.push_back(f[i]);
    ans.push_back(tmp);
}
void xuly(int n,int i,int s)
{
    for(int j=n; j>=1; j--)
    {
        f[i]=j;
        if(j==s) in(i);
        else if(j<s) xuly(j,i+1,s-j);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        xuly(n,1,n);
        cout<<ans.size()<<endl;
        for(auto x:ans)
        {
            cout<<"(";
            for(int i=0; i<x.size()-1; i++)
                cout<<x[i]<<" ";
            cout<<x.back()<<") ";
        }
        cout<<endl;
        ans.clear();
    }
}
