#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
int t;
int n,k;
iii a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i].second.second;
            a[i].second.first=i;
            a[i].first=abs(k-a[i].second.second);
        }
        sort(a+1,a+n+1);
        for(int i=1; i<=n; i++)
            cout<<a[i].second.second<<" ";
        cout<<endl;
    }
}
