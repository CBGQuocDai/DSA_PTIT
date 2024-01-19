#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int a[50];
int cx[50];
int n;
void xuly(int x)
{
    for(int i=0;i<n;i++)
    {
        if(cx[i]==0)
        {
            a[x]=i;
            cx[i]=1;
            if(x==n-1)
            {
                for(int i=0;i<n;i++)
                    cout<<s[a[i]];
                cout<<" ";
            }
            else xuly(x+1);
            cx[i]=0;
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        for(int i=0;i<n;i++) cx[i]=0;
        xuly(0);
        cout<<endl;
    }
}
