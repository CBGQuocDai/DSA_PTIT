#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main()
{
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        stringstream ss(s);
        string x;
        stack<string> st;
        while(ss>>x)
        {
            st.push(x);
        }
        while(!st.empty())
        {
            string tmp=st.top();
            st.pop();
            cout<<tmp<<" ";
        }
        cout<<endl;
    }
}
