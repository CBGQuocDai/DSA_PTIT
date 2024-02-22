#include<bits/stdc++.h>
using namespace std;

int t;
int s[1004][1004];
int main()
{
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        a=" "+a;
        b=" "+b;

        s[0][0]=0;
        for(int i=1;i<=n;i++)
            s[i][0]=0;
        for(int i=1;i<=m;i++)
            s[0][i]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                if(a[i]==b[j])
                {
                    if(a[i]=='0'&&s[i-1][j-1]==0)
                    {
                        s[i][j]=s[i-1][j-1];
                    }
                    else
                    {
                        s[i][j]=s[i-1][j-1]+1;
                    }
                }
                else s[i][j]=max(s[i-1][j],s[i][j-1]);
        }
        cout<<s[n][m]<<endl;
    }
}
