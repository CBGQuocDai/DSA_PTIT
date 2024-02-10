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
        q.push("1");
        while(n!=0)
        {
            n--;
            cout<<q.front()<<" ";
            string a= q.front()+"0" ;
            string b= q.front()+ "1";
            q.pop();
            q.push(a);
            q.push(b);
        }
        cout<<endl;
    }
}
