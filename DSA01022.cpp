#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[20],cx[20];
int b[20];
int d=0;
void xuly(int x)
{
    for(int i=1; i<=n; i++)
    {
        if(cx[i]==0)
        {
            a[x]=i;
            cx[i]=1;
            if(x==n)
            {
                d++;
                int f=1;
                for(int i=1; i<=n; i++)
                {
                    if(a[i]!=b[i])
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                {
                    cout<<d<<endl;
                    return;
                }
            }
            else
            {
                xuly(x+1);
            }
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
        for(int i=1;i<=n;i++) cx[i]=0;
        for(int i=1; i<=n; i++) cin>>b[i];
        xuly(1);
    }
}
