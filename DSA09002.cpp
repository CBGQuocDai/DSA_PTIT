#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int n;
set<ii> a;

int main()
{
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
    {
        string x;
        getline(cin,x);
        stringstream ss(x);
        string s;
        while(ss>>s)
        {
            int tmp=0;
            for(int j=0;j<s.size();j++)
                tmp=tmp*10+s[j]-'0';
            int u=i;
            if(u>tmp) swap(u,tmp);
            a.insert({u,tmp});
        }
    }
    for(auto x:a)
        cout<<x.first<<" "<<x.second<<endl;
}
