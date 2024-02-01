#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int n;
ll f[60];
int main()
{
    cin>>t;
    f[1]=1;
    f[2]=2;
    f[0]=1;
    for(int i=3; i<=50; i++)
    {
        for(int j=1; j<=3; j++)
            f[i]=f[i]+f[i-j];
    }
    while(t--)
    {
        cin>>n;
        cout<<f[n]<<endl;
    }
}
