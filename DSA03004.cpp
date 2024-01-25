#include<bits/stdc++.h>
using namespace std;
int t;
typedef long long ll;
int n,a[21];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        ll c=0;
        ll d=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                d=d*10+ll(a[i]);
            }
            else c=c*10+ll(a[i]);
        }
        cout<<c+d<<endl;
    }
}
