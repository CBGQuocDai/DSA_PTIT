#include<bits/stdc++.h>
using namespace std;
int t;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        stack<int> st;
        int n=s.size();
        bool f=1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(i);
            }
            else
            {
                if(st.empty()) {f=0;
                break;}
                if(s[i]==')')
                {
                    if(s[st.top()]=='['||s[st.top()]=='{')
                    {
                        f=0;
                        break;
                    }
                    else st.pop();
                }
                if(s[i]==']')
                {
                    if(s[st.top()]=='{'||s[st.top()]=='(')
                    {
                        f=0;
                        break;
                    }
                    else st.pop();
                }
                if(s[i]=='}')
                {
                    if(s[st.top()]=='['||s[st.top()]=='(')
                    {
                        f=0;
                        break;
                    }
                    else st.pop();
                }
            }
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
