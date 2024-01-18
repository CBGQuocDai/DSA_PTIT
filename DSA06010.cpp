#include<bits/stdc++.h>
using namespace std;
int t;
int n;
long long x;
set<int> s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            while(x!=0)
            {
                s.insert(x%10);
                x=x/10;
            }
        }
        for(auto x:s)
            cout<<x<<" ";
        cout<<endl;
        s.clear();
    }
}
