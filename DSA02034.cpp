#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[13],cx[13];
int d=0;
int check()
{
    int f=1;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i]-a[i+1])==1)
        {
            f=0;
            break;
        }
    }
    return f;
}
void xuly(int x)
{
    for(int i=1;i<=n;i++)
    {
        if(cx[i]==0)
        {
            a[x]=i;
            cx[i]=1;
            if(x==n)
            {
                if(check()==1)
                {
                    d++;
                    for(int j=1;j<=n;j++)
                        cout<<a[j];
                    cout<<endl;
                }
            }
            else
                xuly(x+1);
            cx[i]=0;
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>n;
        xuly(1);
        if(d==0)
            cout<<endl;
    }
}
