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
        deque<int> q;
        for(int i=1; i<=n; i++)
        {
            int u;
            cin>>u;
            switch (u)
            {
            case 1:
                cout<<q.size()<<endl;
                break;
            case 2:
                if(q.empty()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                break;
            case 3:
                int v;
                cin>>v;
                q.push_back(v);
                break;
            case 4:
                if(!q.empty()) q.pop_front();
                break;
            case 5:
                if(!q.empty()) cout<<q.front()<<endl;
                else cout<<"-1"<<endl;
                break;
            case 6:
                if(!q.empty()) cout<<q.back()<<endl;
                else cout<<"-1"<<endl;
                break;
            }
        }
    }
}
