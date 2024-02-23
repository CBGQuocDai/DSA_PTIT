#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[10][10];
int cx[10][10];
vector<string> ans;
void xuly(int x,int y,string tmp)
{
    if(x<1||x>n||y<1||y>n) return;
    if(a[x][y]==0||cx[x][y]==0) return ;
    cx[x][y]=0;
    if(x==n&& y==n)
    {
        ans.push_back(tmp);
    }
    xuly(x+1,y,tmp+"D");
    xuly(x,y-1,tmp+"L");
    xuly(x,y+1,tmp+"R");
    xuly(x-1,y,tmp+"U");
    cx[x][y]=1;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++) cin>>a[i][j],cx[i][j]=1;
        xuly(1,1,"");
        cx[1][1]=0;
        if(ans.size()==0) cout<<"-1"<<endl;
        else
        {
            for(auto x:ans)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        ans.clear();
    }
}
