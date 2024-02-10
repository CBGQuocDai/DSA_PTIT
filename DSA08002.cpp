#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int n;

int main()
{
    cin>>t;
    queue<int> q;
    while(t--)
    {
        cin>>s;
        if(s=="PUSH")
        {
            int x;
            cin>>x;
            q.push(x);
        }
        if(s=="POP")
        {
            if(!q.empty())
                q.pop();
        }
        if(s=="PRINTFRONT")
        {
            if(!q.empty())
            {
                cout<<q.front()<<endl;
            }
            else cout<<"NONE"<<endl;
        }
    }
}
