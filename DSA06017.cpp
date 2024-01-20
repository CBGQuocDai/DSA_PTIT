#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t,n,m;
int a[maxn];
int b[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=m;i++)
            cin>>b[i];
        sort(a+1,a+n+1);
        sort(b+1,b+n+1);
        int i=1,j=1;
        while(i<=n||j<=m)
        {
            if((a[i]<b[j] || j>m)&&i<=n)
            {
                cout<<a[i]<<" ";
                i++;
            }
            else {
                cout<<b[j]<<" ";
                j++;
            }
        }
        cout<<endl;
    }
}
