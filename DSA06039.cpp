#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n;
int a[maxn];
map<int,int> m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        m.clear();
        int f=n+1;
        int val=0;
        for(int i=1; i<=n; i++)
        {
            if(m[a[i]]==0)
                m[a[i]]=i;
            else
            {
                if(m[a[i]]<f)
                {
                    f=m[a[i]];
                    val=a[i];
                }
            }
        }
        if(f==n+1) cout<<"NO"<<endl;
        else cout<<val<<endl;
    }
}
