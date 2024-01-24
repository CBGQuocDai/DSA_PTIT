#include<bits/stdc++.h>
using namespace std;
int n;
char k;
int a[20];int m;
void xuly(int x)
{
    for(int i=a[x-1];i<=m;i++)
    {
        a[x]=i;
        if(x==n)
        {
            for(int j=1;j<=n;j++)
            {
                char c=char(a[j]+'A');
                cout<<c;
            }
            cout<<endl;
        }
        else
            xuly(x+1);
    }
}
int main()
{
    cin>>k>>n;
    m=k-'A';
    xuly(1);
}

