#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t;
int n;
int a[maxn],b[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<n;i++) cin>>b[i];
        int i=1;
        while(i<n)
        {
            if(a[i]!=b[i]){cout<<i<<endl;
            break;}
            i++;
        }

    }

}
