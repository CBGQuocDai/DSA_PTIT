
#include<bits/stdc++.h>
using namespace std;
const int maxn=5004;
typedef long long ll;

int t;
int n;
ll a[maxn];

bool xuly()
{
    for(int i=1; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ll x=a[i]+a[j];
            int g=lower_bound(a+j+1,a+n+1,x)-a;
            if(a[g]==x&&g<=n) return true;
        }
    }
    return false;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>a[i],a[i]=a[i]*a[i];
        sort(a+1,a+n+1);
        if(xuly()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
