#include<bits/stdc++.h>
using namespace std;

stack<int> st;
string s;
int n;
int main()
{
    while(cin>>s)
    {
        if(s=="push")
        {
            cin>>n;
            st.push(n);
        }
        if(s=="show")
        {
            if(st.empty()) cout<<"empty"<<endl;
            else
            {
                stack<int> tmp;
                int k;
                while(st.size()>0)
                {
                    k=st.top();
                    st.pop();
                    tmp.push(k);
                }
                while(tmp.size()>0)
                {
                    k=tmp.top();
                    st.push(k);
                    cout<<k<<" ";
                    tmp.pop();
                }
                cout<<endl;
            }
        }
        if(s=="pop")
        {
            st.pop();
        }
    }
}
