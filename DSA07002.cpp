#include<bits/stdc++.h>
using namespace std;

stack<int> st;
string s;
int n,q;
int main()
{
    cin>>q;
    while(q--)
    {
        cin>>s;
        if(s=="PUSH")
        {
            cin>>n;
            st.push(n);
        }
        if(s=="PRINT")
        {
            if(st.empty()) cout<<"NONE"<<endl;
            else
            {
                cout<<st.top()<<endl;
            }
        }
        if(s=="POP"&&st.size()>0)
        {
            st.pop();
        }
    }
}

