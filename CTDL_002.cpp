#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int b[100];
int tmp,ans;
void xuat()
{
    for(int i=1; i<=n; i++)
    {
        if(b[i]==1) cout<<a[i]<<" ";
    }
    cout<<endl;
    ans++;
}
void xuly(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        tmp+=a[x]*i;
        if(x==n)
        {
            if(tmp==k) xuat();
        }
        else
        {
            if(tmp<=k) xuly(x+1);
        }
        tmp-=a[x]*i;
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    xuly(1);
    cout<<ans<<endl;
}/*
5 50
5 10 15 20 25
*/
