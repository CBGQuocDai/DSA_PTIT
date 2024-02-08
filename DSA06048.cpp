#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
typedef long long ll;
int t;
int n;
ll a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int j=min_element(a+1,a+n+1)-a;
        cout<<j-1<<endl;
    }
}
