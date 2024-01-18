
#include<bits/stdc++.h>
using namespace std;

int t;
int n;
int a[20];
int d,k;
void xuly(int x)
{
    for(int i=0; i<=1; i++)
    {
        a[x]=i;
        d+=i;
        if(x==n)
        {
            if(d==k)
            {
                for(int i=1; i<=n; i++)
                    cout<<a[i];
                cout<<endl;
            }
        }
        else
        {
            if(d<=k)
                xuly(x+1);
        }
        d-=i;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>n>>k;
        xuly(1);
    }
}
