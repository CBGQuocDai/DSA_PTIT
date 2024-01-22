#include<bits/stdc++.h>
using namespace std;

int n;
int a[10];
int x[10];
int cx[10];
void xuly(int u)
{
    for(int i=1;i<=n;i++)
    {
        if(cx[i]==1)
        {
            x[u]=i;
            cx[i]=0;
            if(u==n)
            {
                for(int i=1;i<=n;i++)
                    cout<<a[x[i]]<<" ";
                cout<<endl;
            }
            else xuly(u+1);
            cx[i]=1;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) cx[i]=1;
    xuly(1);
}
