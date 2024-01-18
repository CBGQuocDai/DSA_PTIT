#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+4;
int t;
int k,n;
int a[maxn];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int d=n;
        while(k--)
        {
            cout<<a[d]<<" ";
            d--;
        }
        cout<<endl;
    }
}
