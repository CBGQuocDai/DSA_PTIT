#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int n;
int t;
int a[4];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<=2;i++) a[i]=0;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        for(int i=0;i<=2;i++)
        {
            while(a[i]!=0)
            {
                 cout<<i<<" ";
                 a[i]--;
            }
        }
        cout<<endl;
    }
}
