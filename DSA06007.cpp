#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t;
int n;
int a[maxn];
int b[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a+1,a+n+1);
        int l=1,r=n;
        while(true)
        {
            if(a[l]==b[l]) l++;
            if(a[r]==b[r]) r--;
            if(a[l]!=b[l] && a[r]!=b[r]) break;
        }
        cout<<l<<" "<<r<<endl;
    }
}
