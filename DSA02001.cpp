#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[20];
int b[20];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        while(true)
        {
            cout<<"[";
            for(int i=1;i<n;i++)
                cout<<a[i]<<" ";
            cout<<a[n]<<"]\n";
            n--;
            if(n==0) break;
            for(int i=1;i<=n;i++)
            {
                a[i]=a[i]+a[i+1];
            }

        }
    }
}
