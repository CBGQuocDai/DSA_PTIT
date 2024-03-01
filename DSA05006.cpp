#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
int t,n,a[maxn];
int f[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i],f[i]=a[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    f[i]=max(f[i],f[j]+a[i]);
                }
            }
        }
        cout<<*max_element(f+1,f+n+1)<<endl;
    }
}
