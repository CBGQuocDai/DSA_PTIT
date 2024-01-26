#include<bits/stdc++.h>
using namespace std;
int t;
map<char,int > m;

int main()
{
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int mm=0;
        for(auto x:m)
        {
            mm=max(mm,x.second);
        }
        if(mm>n/2+n%2) cout<<"-1"<<endl;
        else cout<<"1"<<endl;
        m.clear();
    }
}
