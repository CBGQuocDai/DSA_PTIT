#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        int n=s.size();
        bool f=1;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') st.push(i);
            if(s[i]==')')
            {
                int u=st.top();
                st.pop();
                if(i-u==2||s[u+1]=='('&&s[i-1]==')') {f=0;break;}
            }
        }
        if(f==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
