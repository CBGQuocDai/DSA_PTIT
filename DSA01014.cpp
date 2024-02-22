#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int a[50];
int ans=0;
void xuly(int x,int tmp)
{
    for(int i=a[x-1]+1;i<=n-k+x;i++)
    {
        a[x]=i;
        if(tmp+i>s) return ;
        if(x==k)
        {
            if(tmp+i==s) ans++;
        }
        else
        {
            xuly(x+1,tmp+i);
        }
    }
}
int main()
{
    while(true)
    {
        cin>>n>>k>>s;
        a[0]=0;
        if(n==0&&k==0&&s==0) break;
        xuly(1,0);
        cout<<ans<<endl;
        ans=0;
    }
}
