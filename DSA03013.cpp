#include<bits/stdc++.h>
using namespace std;
int t,d;
string s;
typedef pair<int,int> ii;
int check(vector<ii> a,int n)
{
    if(d!=a.size()) return false;
    int j=0;
    for(int i=0;i<d;i++)
    {
        int k=((n-1)-i)/d;
        k++;
        if(k!=a[i].first) return false;
    }
    return true;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>d;
        cin>>s;
        int n=s.size();
        map<char,int> m;
        for(int i=0;i<n;i++)
            m[s[i]]++;
        vector<ii> vt;
        for(auto x:m)
            vt.push_back({x.second,x.first});
        sort(vt.rbegin(),vt.rend());

        if(check(vt,n)) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}
