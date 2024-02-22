#include<bits/stdc++.h>
using namespace std;
int t;
int n,k;
int a[1004];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1; i<=k; i++) cin>>a[i];
        a[0]=0;
        int i=k;
        while(a[i]==a[i-1]+1) i--;
        a[i]--;
        for(int j=i+1; j<=k; j++) a[j]=n-k+j;
        for(int i=1; i<=k; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
