#include<bits/stdc++.h>
using namespace std;
const int dx[2]={1,0};
const int dy[2]={0,1};
int n,t;
int a[20][20];
string s;
int f;
void xuly(int x,int y)
{
    for(int i=0;i<2;i++)
    {
        int u=x+dx[i];
        int v=y+dy[i];
        if(u<=n&& v<=n)
        {
            if(i==1) s=s+"R";
            else s=s+"D";
            if(u==n&& v==n &&a[u][v]==1)
            {
                cout<<s<<" ";
                f=1;
            }
            else {
                if(a[u][v]==1)
                    xuly(u,v);
            }
            s.erase(s.size()-1,1);
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        s="";
        f=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cin>>a[i][j];
        }
        if(a[1][1]!=0) xuly(1,1);
        if(f==0) cout<<"-1"<<endl;
        else
            cout<<endl;
    }
}
