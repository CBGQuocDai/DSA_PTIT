#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
    cin>>t;
    while(t--)
    {
        stack<int> st;
        string s;
        int n;
        cin>>s;
        n=s.size();
        int d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
               st.push(i);
            if(s[i]==')')
            {
                if(st.empty()) {
                    d++;
                    st.push(i);
                }
                else
                {
                    st.pop();
                }
            }
        }
        d+=st.size()/2;
        cout<<d<<endl;
    }
}
