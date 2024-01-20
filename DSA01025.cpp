#include<bits/stdc++.h>
using namespace std;

int t;
int n,a[20],k;
void xuly(int x)
{
    for(int i=a[x-1]+1;i<=n-k+x;i++)
    {
        a[x]=i;
        if(x==k)
        {
            for(int i=1;i<=k;i++)
            {
                char g=(char)(a[i]-1+'A');
                cout<<g;
            }
            cout<<endl;
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
        xuly(1);
    }
}
