#include<bits/stdc++.h>
using namespace std;

int t,n,k;
int a[25];
int xx[25];
int f=0;
void in(int n)
{
    f=1;
    cout<<"[";
    for(int i=1;i<n;i++)
        cout<<a[xx[i]]<<" ";
    cout<<a[xx[n]]<<"]";

}
void xuly(int x,int s)
{
    for(int i=xx[x-1];i<=n;i++)
    {
        xx[x]=i;
        if(s+a[i]>k) return;
        if(s+a[i]==k)
        {
            in(x);
            return ;
        }
        xuly(x+1,s+a[i]);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        xx[0]=1;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        f=0;
        sort(a+1,a+n+1);
        xuly(1,0);
        if(f==0) cout<<-1;
        cout<<endl;
    }
}
