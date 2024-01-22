#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int n,t;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[1][i];
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=n-(i-1);j++)
                a[i][j]=a[i-1][j]+a[i-1][j+1];
        }
        for(int i=n;i>=1;i--)
        {
            cout<<"[";
            for(int j=1;j<=n-(i-1);j++)
            {
                if(j==n-(i-1))
                    cout<<a[i][j]<<"] ";
                else cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
