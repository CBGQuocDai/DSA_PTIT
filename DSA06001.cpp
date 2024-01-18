#include<bits/stdc++.h>
using namespace std;

int t;
int n;
const int maxn=1e3+5;
int a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        int l=1;
        int r=n;
        while(l<r)
        {
            cout<<a[r]<<" "<<a[l]<<" ";
            l++;
            r--;
        }
        if(l==r) cout<<a[l]<<endl;
        else cout<<endl;
    }
}
