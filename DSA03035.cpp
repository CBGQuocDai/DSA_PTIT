#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int n;
int a[maxn];
int f[maxn];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int k=0;
    for(int i=1;i<=n;i++)
    {
        f[a[i]]=f[a[i]-1]+1;
    }
    k=*max_element(f+1,f+n+1);
    cout<<n-k<<endl;
}
