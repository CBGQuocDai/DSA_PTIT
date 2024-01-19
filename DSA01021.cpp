#include<bits/stdc++.h>
using namespace std;
int t;
int n,a[100];
int b[100];
int k;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=k;i++)
            cin>>a[i];
        int j=k;
        int d=0;
        while(a[j]==n-d)
        {
            d++;
            j--;
            if(j==0) break;
        }
        if(j!=0)
        {b[j]=a[j]+1;
        for(int i=j+1;i<=k;i++)
        {
            b[i]=b[i-1]+1;
        }
        int ans=k-j+1;
        for(int i=j;i<=k;i++)
        {
            for(int u=j;u<=k;u++)
                if(b[i]==a[u])
                {
                    ans--;
                    break;
                }
        }
        cout<<ans<<endl;}
        else cout<<k<<endl;
    }
}
