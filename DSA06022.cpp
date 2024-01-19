#include<bits/stdc++.h>
using namespace std;
int t;
int n;
set<int> s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        if(s.size()<2) cout<<"-1"<<endl;
        else
        {
            set<int> ::iterator it;
            it=s.begin();
            cout<<*it<<" "<<*(++it)<<endl;
        }
        s.clear();
    }
}
