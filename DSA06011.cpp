#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+4;
int t,n;
int a[maxn];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        int res =a[1]+a[2];
        for(int i=1; i<=n; i++)
        {
            int j=lower_bound(a+i+1,a+n+1,-a[i])-a;
            if(j>i&&j<=n)
            {
                int tmp=a[i]+a[j];
                if(abs(tmp)<abs(res))
                {
                    res=tmp;
                }
            }
            j--;
            if(i!=j)
            {
                int tmp=a[i]+a[j];
                if(abs(tmp)<abs(res))
                {
                    res=tmp;
                    if(res==0) break;
                }
            }
        }
        cout<<res<<endl;
    }
}
