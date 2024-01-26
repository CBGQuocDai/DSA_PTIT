#include<bits/stdc++.h>
using namespace std;

int n;
int a[20];
int cx[20];
int findd(char c)
{
    int x=c-'A';
    for(int i=0;i<=n;i++)
        if(a[i]==x) return i;
    return n+1;
}
bool check()
{
    int u=findd('A');
    int v=findd('E');
    if(u==0 &&v==n) return true;
    if(u==n && v==0) return true;
    if(v==n+1 && u==0) return true;
    if(abs(u-v)==1) return true;
    return false;
}
void xuly(int x)
{
    for(int i=0; i<=n; i++)
    {
        if(cx[i]==0)
        {
            cx[i]=1;
            a[x]=i;
            if(x==n)
            {
                if(check())
                {
                    for(int j=0; j<=n; j++)
                    {
                        char c=char(a[j]+'A');
                        cout<<c;
                    }
                    cout<<endl;
                }
            }
            else xuly(x+1);
            cx[i]=0;
        }
    }
}
int main()
{
    char c;
    cin>>c;
    n=c-'A';
    xuly(0);
}
