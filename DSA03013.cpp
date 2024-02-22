#include<bits/stdc++.h>
using namespace std;
int t;

int d;


int main()
{
    cin>>t;
    while(t--)
    {
        cin>>d;
        string s;
        cin>>s;
        int n=s.size();
        map<char,int> m;
        int tmp=0;
        for(int i=0; i<n; i++)
            m[s[i]]++,tmp=max(tmp,m[s[i]]);

        if(n%d==0)
        {
            if(tmp>(n/d+1))
            {
                cout<<"-1"<<endl;
            }
            else cout<<"1"<<endl;
        }
        else
        {
            if(tmp>(n/d+1))
            {
                cout<<"-1"<<endl;
            }
            else cout<<"1"<<endl;
        }
    }
}
