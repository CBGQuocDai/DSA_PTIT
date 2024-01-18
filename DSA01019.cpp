#include<bits/stdc++.h>
using namespace std;

int t;
int n;
int a[20];
void xuly(int x)
{
    for(int i=0; i<=1; i++)
    {
        a[x]=i;
        if(i==1)
        {
            if(a[x-1]!=1)
            {
                if(x==n-1)
                {
                    for(int i=1; i<=n; i++)
                        if(a[i]==1) cout<<"H";
                        else cout<<"A";
                    cout<<endl;
                }
                else xuly(x+1);
            }
        }
        else
        {
            if(x==n-1)
            {
                for(int i=1; i<=n; i++)
                    if(a[i]==1) cout<<"H";
                    else cout<<"A";
                cout<<endl;
            }
            else xuly(x+1);
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)
            cout<<"HA"<<endl;
        else {
        a[1]=1;
        a[n]=0;
        xuly(2);}
    }
}
