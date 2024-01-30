#include<bits/stdc++.h>
using namespace std;
int t;
int n,a[1000];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int mm=-1e4;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            mm=max(a[i],mm);
        }
        if(mm<0) {
            cout<<mm<<endl;
        }
        else
        {
            int tmp=0;
            int ans=-1e4;
            for(int i=1;i<=n;i++)
            {
                tmp+=a[i];
                if(tmp<0)
                {
                    tmp=0;
                }
                ans=max(ans,tmp);
            }
            cout<<ans<<endl;
        }

    }
}
