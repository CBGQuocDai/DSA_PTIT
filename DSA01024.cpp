#include<bits/stdc++.h>
using namespace std;
int n,a[20],k;
vector<string > b;
void xuly(int x)
{
    for(int i=a[x-1]+1; i<=n-k+x; i++)
    {
        a[x]=i;
        if(x==k)
        {
            for(int j=1; j<=k; j++)
            {
                cout<<b[a[j]-1]<<" ";
            }
            cout<<endl;
        }
        else xuly(x+1);
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        int f=1;
        for(int j=0; j<b.size(); j++)
        {
            if(s==b[j])
            {
                f=0;
                break;
            }
        }
        if(f==1) b.push_back(s);
    }
    sort(b.begin(),b.end());
    n=b.size();
    xuly(1);
}
