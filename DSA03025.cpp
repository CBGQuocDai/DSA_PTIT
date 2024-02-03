#include<bits/stdc++.h>
using namespace std;
int t;
int n;
typedef pair<int,int> ii;
vector<ii> a;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        a.clear();
        for(int i=1;i<=n;i++)
        {
            int u,v;
            cin>>u>>v;
            a.push_back({v,u});
        }
        sort(a.begin(),a.end());
        ii now =a[0];
        int d=1;
        for(int i=1;i<n;i++)
        {
            if(a[i].second>=now.first){
                d++;
                now=a[i];
            }
        }
        cout<<d<<endl;
    }
}
