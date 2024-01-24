#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n,a[maxn];
int s[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        s[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            s[i]=s[i-1]+a[i];
        }
        int f=-1;
        for(int i=2;i<=n;i++)
        {
            int u=s[i-1];
            int v=s[n]-s[i];
            if(u==v)
            {
                f=i;
                break;
            }
        }
        cout<<f<<endl;
    }
}
