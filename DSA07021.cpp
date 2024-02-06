#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
    cin>>t;
    while(t--)
    {
        stack<int> st;
        int n;
        string s;
        cin>>s;
        n=s.size();
        int ans=0;
        st.push(-1);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') st.push(i);
            if(s[i]==')')
            {
                st.pop();
                if(st.empty())
                    st.push(i);
                else ans=max(ans,i-st.top());
            }
        }
        cout<<ans<<endl;
    }
}
