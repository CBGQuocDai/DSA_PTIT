#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
int t;
int n,x;
int a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int j=lower_bound(a+1,a+n+1,x)-a;
        if(a[j]==x&& j!=n+1)
        {
            int d=0;
            while(a[j+d]==x) d++;
            cout<<d<<endl;
        }
        else cout<<"-1"<<endl;
    }
}
