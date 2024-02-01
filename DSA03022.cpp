#include<bits/stdc++.h>
using namespace std;
const int maxn=10003;
int n;
int a[maxn];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    int tmp1=a[1]*a[2];
    int tmp2=a[n]*a[n-1];
    int tmp3=a[n]*a[n-1]*a[n-2];
    int tmp4=a[1]*a[2]*a[n];
    int ans=max(max(max(tmp1,tmp2),tmp3),tmp4);
    cout<<ans<<endl;
}
