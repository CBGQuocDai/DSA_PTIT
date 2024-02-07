#include<bits/stdc++.h>
using namespace std;
const int maxn=5004;
int t;
int n,k;
int a[maxn];

bool xuly()
{
    for(int i=1; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int x=k-a[i]-a[j];
            if(x<a[j] ) break;

            int g=lower_bound(a+j+1,a+n+1,x)-a;
            if(a[g]==x) return true;
        }
    }
    return false;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        if(xuly()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
