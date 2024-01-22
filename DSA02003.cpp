#include<bits/stdc++.h>
using namespace std;
const int dx[2]= {1,0};
const int dy[2]= {0,1};
int n,t;
int a[20][20];
vector<string> ans;
void xuly(int x,int y,string s)
{
    if (x>n||y> n) return ;
    if (a[x][y]==0) return ;
    if(x==n&& y==n)
    {
        ans.push_back(s);
    }
    xuly(x+1,y,s+"D");
    xuly(x,y+1,s+"R");
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans.clear();
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cin>>a[i][j];
        }
        xuly(1,1,"");
        if(ans.size()==0) cout<<"-1"<<endl;
        else
        {
            for(auto x:ans)
                cout<<x<<" ";
            cout<<endl;
        }
    }
}
