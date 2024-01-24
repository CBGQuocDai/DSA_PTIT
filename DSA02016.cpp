#include<bits/stdc++.h>
using namespace std;

int t;
int n;
int cx[20];
int ans=0;
int a[20];
set<int> s1;
set<int> s2;
void xuly(int x)
{
    for(int i=1; i<=n; i++)
    {
        if(cx[i]==0)
        {
            if(s1.find(i-x)==s1.end()&& s2.find(i+x)==s2.end())
            {
                a[x]=i;
                cx[i]=1;
                s1.insert(i-x);
                s2.insert(i+x);
                if(x==n) ans++;
                else xuly(x+1);
                cx[i]=0;
                s1.erase(i-x);
                s2.erase(i+x);
            }
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int d=0;
        ans=0;
        xuly(1);
        cout<<ans<<endl;
    }
}
