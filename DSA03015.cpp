#include<bits/stdc++.h>
using namespace std;
int t;
int n,m,k;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(n<k||6*(n-k)<k) cout<<"-1"<<endl;
        else
        {
            int tmp=m*k;
            int d=tmp/n;
            if(n*d!=tmp) d++;
            cout<<d<<endl;
        }
    }
}
