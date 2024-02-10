#include<bits/stdc++.h>
using namespace std;

int t;
deque<int> dq;

int main()
{
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s== "PUSHBACK")
        {
            int x;
            cin>>x;
            dq.push_back(x);
        }
        if(s== "PUSHFRONT")
        {
            int x;
            cin>>x;
            dq.push_front(x);
        }
        if(s== "PRINTFRONT")
        {
            if(dq.empty()) cout<<"NONE"<<endl;
            else cout<<dq.front()<<endl;
        }
        if(s== "PRINTBACK")
        {
            if(dq.empty()) cout<<"NONE"<<endl;
            else cout<<dq.back()<<endl;
        }
        if(s== "POPBACK")
            if(!dq.empty()) dq.pop_back();
        if(s=="POPFRONT")
            if(!dq.empty()) dq.pop_front();

    }
}
