#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[102];
int s[102];
int tmp=0;
int ans=0;
int sum;
void xuly(int x)
{
    for(int i=0; i<=1; i++)
    {
        if(i==1)
        {
            tmp+=a[x];
        }
        if(x==n)
        {
            if(tmp==sum)
            {
                ans=1;
                return ;
            }
        }
        else
        {
            if(sum>=tmp&& tmp+(s[n]-s[x])>=sum) xuly(x+1);
        }
        if(i==1)
            tmp-=a[x];
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s[i]=s[i-1]+a[i];
        }
        tmp=0;
        ans=0;
        if(s[n]%2==0)
        {
            sum=s[n]/2;
            xuly(1);
            if(ans==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
