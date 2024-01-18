#include<bits/stdc++.h>
using namespace std;

int t;
int n;
int a[20];
void xuly(int x)
{
    for(int i=0;i<=1;i++)
    {
        a[x]=i;
        if(x==n)
        {
            for(int i=1;i<=n;i++)
                if(a[i]==0) cout<<"A";
                else cout<<"B";
            cout<<" ";
        }
        else xuly(x+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        xuly(1);
        cout<<endl;
    }
}
