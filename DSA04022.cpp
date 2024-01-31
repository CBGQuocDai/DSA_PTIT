#include<bits/stdc++.h>
using namespace std;
int t;
int n,m;
char xuly(int n,int m)
{
    int k=pow(2,n-1);
    if(k==m) return (char)(n-1+'A');
    if(m<k) return xuly(n-1,m);
    else return xuly(n-1,m-k);
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<xuly(n,m)<<endl;
    }
}
