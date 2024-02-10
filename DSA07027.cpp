#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t,n;
int a[maxn],b[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[0]=-1;
        for(int i=1;i<=n;i++) cin>>a[i],b[i]=0;
        stack<int> st;
        for(int i=1;i<=n;i++)
        {
            while(!st.empty()&& a[i]>a[st.top()])
            {
                b[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        for(int i=1;i<=n;i++)
            cout<<a[b[i]]<<" ";
        cout<<endl;
    }
}
