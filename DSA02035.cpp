#include<bits/stdc++.h>
using namespace std;

int n,k;
string s[100];
int cx[100];
int a[100];
int ans=1e9+5;
void capnhat()
{
    int mm=1e9+5;
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        int tmp=0;
        for(int j=1; j<=k; j++)
            tmp=tmp*10+s[i][a[j]]-'0';
        mm=min(mm,tmp);
        mx=max(mx,tmp);

    }
    ans=min(ans,mx-mm);
}
void xuly(int x)
{
    for(int i=0; i<k; i++)
    {
        if(cx[i]==1)
        {
            cx[i]=0;
            a[x]=i;
            if(x==k)
            {
                capnhat();
            }
            else xuly(x+1);
            cx[i]=1;
        }
    }
}
int main()
{
    cin>>n>>k;
    for(int  i=1; i<=n; i++) cin>>s[i];
    for(int i=0; i<=k; i++) cx[i]=1;
    xuly(1);
    cout<<ans<<endl;
}
