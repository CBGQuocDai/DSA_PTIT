#include<bits/stdc++.h>
using namespace std;

int t;
int cx[20];
int ans=0;
int a[10];
int w[10][10];
set<int> s1;
set<int> s2;
void xuly(int x,int tmp)
{
    for(int i=1; i<=8; i++)
    {
        if(cx[i]==0)
        {
            if(s1.find(i-x)==s1.end()&& s2.find(i+x)==s2.end())
            {
                a[x]=i;
                cx[i]=1;
                s1.insert(i-x);
                s2.insert(i+x);
                if(x==8) ans=max(ans,tmp+w[x][i]);
                else xuly(x+1,tmp+w[x][i]);
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
        ans=0;
        for(int i=1; i<=8; i++) cx[i]=0;
        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++)
                cin>>w[i][j];
        xuly(1,0);
        cout<<ans<<endl;
    }
}
