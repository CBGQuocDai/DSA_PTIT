#include<bits/stdc++.h>
using namespace std;

int t ,n,k;
int a[15];
int cx[15];
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
                for(int i=1;i<=n;i++)
                    cout<<a[i];
                cout<<" ";
            }
            else xuly(x+1);
            cx[i]=0;
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        xuly(1);
        cout<<endl;
    }
}

