#include<bits/stdc++.h>
using namespace std;
int n;
int a[13][13];
string s[13];
int dup(string x,string y)
{
    int n=x.size();
    int m=y.size();
    int d=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(x[i]==y[j]) d++;
        }
    return d;
}
int cx[13];
int w[13],ans=100000,tmp=0;
void xuly(int x)
{
    for(int i=1;i<=n;i++)
    {
        if(cx[i]==1)
        {
            w[x]=i;
            tmp+=a[w[x-1]][i];
            cx[i]=0;
            if(x==n)
            {
                ans=min(ans,tmp);
            }
            else
            {
                xuly(x+1);
            }
            tmp-=a[w[x-1]][i];
            cx[i]=1;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>s[i],cx[i]=1;
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
        {
            int k=dup(s[i],s[j]);
            a[i][j]=k;
            a[j][i]=k;
        }
    for(int i=0;i<=n;i++)
        a[0][i]=0;
    xuly(1);
    cout<<ans<<endl;
}
