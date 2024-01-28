#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[1005];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int j=upper_bound(a+1,a+n+1,0)-a;
        cout<<j-1<<endl;
    }
}
