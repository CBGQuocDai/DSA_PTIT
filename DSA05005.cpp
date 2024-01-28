#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+4;
int n,a[maxn],s[maxn];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        s[1]=1;
        for(int i=2; i<=n; i++)
        {
            s[i]=1;
            for(int j=1; j<i; j++)
                if(a[i]>=a[j])
                    s[i]=max(s[i],s[j]+1);

        }
        int ans=*max_element(s+1,s+n+1);
        cout<<n-ans<<endl;
    }
}
