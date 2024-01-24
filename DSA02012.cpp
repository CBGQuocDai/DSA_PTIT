#include<bits/stdc++.h>
using namespace std;
int n,m,t;
int a[103][103];
int d=0;
void xuly(int x,int y)
{
    if(x>n||y>m) return ;
    if(x==n&& y==m) d++;
    else
    {
        xuly(x+1,y);
        xuly(x,y+1);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin>>a[i][j];
        xuly(1,1);
        cout<<d<<endl;
        d=0;
    }
}
