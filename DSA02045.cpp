#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
int f[20];
void in(int n)
{
    for(int i=1;i<=n;i++)
        cout<<s[f[i]-1];
    cout<<" ";
}
void xuly(int x)
{
    if(x==n+1) return ;
    for(int i=f[x-1]+1;i<=n;i++)
    {
        f[x]=i;
        in(x);
        xuly(x+1);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        f[0]=0;
        xuly(1);
        cout<<endl;
    }
}
