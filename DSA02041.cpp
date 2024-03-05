#include<bits/stdc++.h>
using namespace std;
int t;
int n;

int ans=1e8;
void xuly(int n,int d)
{
    if(n==1)
    {
        ans=min(ans,d);
        return ;
    }
    if(d>ans) return ;
    if(n%3==0) xuly(n/3,d+1);
    if(n%2==0) xuly(n/2,d+1);
    xuly(n-1,d+1);
}
int main()
{
    cin>>t;
    while(t--)
    {
        ans=1e8;
        cin>>n;
        xuly(n,0);
        cout<<ans<<endl;
    }
}
