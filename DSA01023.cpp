#include<bits/stdc++.h>
using namespace std;

int n,k;
int t;
int a[20];
int b[20];
int d;
void xuly(int x)
{
    for(int i=a[x-1]+1; i<=n-k+x; i++)
    {
        a[x]=i;
        if(x==k)
        {
            d++;
            int f=1;
            for(int j=1; j<=k; j++)
                if(a[j]!=b[j])
                {
                    f=0;
                    break;
                }
            if(f==1)
            {
                cout<<d<<endl;
            }
        }
        else xuly(x+1);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        d=0;
        a[0]=0;
        for(int i=1; i<=k; i++) cin>>b[i];
        xuly(1);
    }
}
