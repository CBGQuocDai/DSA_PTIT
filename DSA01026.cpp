#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
int s[20];
int check()
{
    bool f=1;
    for(int i=1; i<n; i++)
    {
        s[i]=s[i-1]+a[i];
        if(a[i]==1&&a[i+1]==1)
        {
            f=0;
            break;
        }
    }
    s[n]=s[n-1]+a[n];
    if(f==1)
    {
        for(int i=4; i<=n; i++)
        {
            int tmp=s[i]-s[i-4];
            if(tmp==0)
            {
                f=0;
                break;
            }
        }
    }
    return f;
}
void xuly(int x)
{
    for(int i=0; i<=1; i++)
    {
        a[x]=i;
        if(x==n-1)
        {
            if(check()==1)
            {
                for(int i=1; i<=n; i++)
                {
                    if(a[i]==1) cout<<"8";
                    else cout<<"6";
                }
                cout<<endl;
            }
        }
        else xuly(x+1);
    }
}
int main()
{
    cin>>n;
    a[1]=1;
    a[n]=0;
    s[1]=1;
    xuly(2);
}
