#include<bits/stdc++.h>
using namespace std;
int t;

int main()
{
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        queue<int> q;
        q.push(9);
        while(true)
        {
            if(q.front()%k==0)
            {
                cout<<q.front()<<endl;
                break;
            }
            int a= q.front()*10+0 ;
            int b= q.front()*10+9 ;
            q.pop();
            q.push(a);
            q.push(b);
        }
    }
}

