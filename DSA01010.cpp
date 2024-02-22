#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[30];
int d[30];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++) d[i]=0;
        for(int i=1;i<=k;i++)
            cin>>a[i],d[a[i]]=1;
        int j=k;
        while(a[j]==n-k+j&&j>=1) j--;
        if(j==0) cout<<k<<endl;
        else
        {
            int tmp=k-j+1;

            a[j]=a[j]+1;
            tmp-=d[a[j]];

            for(int i=j+1;i<=k;i++)
            {
                a[i]=a[i-1]+1;
                tmp-=d[a[i]];
            }
            cout<<tmp<<endl;
        }
    }
}
