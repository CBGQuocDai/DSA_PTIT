#include<bits/stdc++.h>
using namespace std;
int t;

int main()
{
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        queue<string> q;
        q.push("6");
        q.push("8");
        vector<string> ans;
        while(true)
        {
            if(q.front().size()>n) break;
            ans.push_back(q.front());
            string a= q.front()+"6" ;
            string b= q.front()+ "8";
            q.pop();
            q.push(a);
            q.push(b);
        }
        int m=ans.size()-1;
        for(int i=m;i>=0;i--)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
