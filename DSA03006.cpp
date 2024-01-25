#include<bits/stdc++.h>
using namespace std;
int t;
int n,a[60];
int b[60];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b+1,b+n+1);
        int f=1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==b[i]||a[i]==b[n-i+1]) continue;
            else {
                f=0;
                break;
            }
        }
        if(f==1)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
