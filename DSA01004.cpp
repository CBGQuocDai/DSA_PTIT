#include<bits/stdc++.h>
using namespace std;

int t ,n,k;
int a[15];
void xuly(int x)
{
    for(int i=a[x-1]+1;i<=n-k+x;i++)
    {
        a[x]=i;
        if(x==k)
        {
            for(int i=1;i<=k;i++)
                cout<<a[i];
            cout<<" ";
        }
        else xuly(x+1);
    }
}
int main()
{
    cin>>t;
    a[0]=0;
    while(t--)
    {
        cin>>n>>k;
        xuly(1);
        cout<<endl;
    }
}
