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
        int n=s.size();
        stack<string> st;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]>='A'&&s[i]<='Z')
                st.push(string(1,s[i]));
            else
            {
                string a=st.top();st.pop();
                string b=st.top();st.pop();
                string tmp=a+b+s[i];
                st.push(tmp);
            }
        }
        cout<<st.top()<<endl;
    }
}
