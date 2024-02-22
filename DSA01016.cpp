#include<bits/stdc++.h>
using namespace std;
int t,n;
int ans[105],d=0;
void in(int n)
{
    cout<<"(";
    for(int i=1; i<n; i++)
        cout<<ans[i]<<" ";
    cout<<ans[n]<<") ";
}
void xuly(int x,int i,int s)
{
    for(int j=x; j>=1; j--)
    {
        ans[i]=j;
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
        ans[0]=1e9;
        xuly(n,1,n);
        d=0;
        cout<<endl;
    }
}
