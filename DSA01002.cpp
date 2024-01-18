#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
int t;
int n,k;
int a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1; i<=k; i++)
        {
            cin>>a[i];
        }
        int j=k;
        int d=0;
        while(a[j]==n-d&& j>=1)
        {
            j--;
            d++;
        }
        if(j==0)
        {
            for(int i=1; i<=k; i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            for(int i=1; i<j; i++)
                cout<<a[i]<<" ";
            a[j]=a[j]+1;
            cout<<a[j]<<" ";
            for(int i=j+1; i<=k; i++)
            {
                a[i]=a[i-1]+1;
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}
