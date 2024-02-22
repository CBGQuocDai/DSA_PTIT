#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        queue<long long> q;
        q.push(9);
        while(true)
        {
            long long x=q.front();
            q.pop();
            if(x%n==0){
                cout<<x<<endl;
                break;
            }
            else
            {
                long long a=x*10+0;
                long long b=x*10+9;
                q.push(a);
                q.push(b);
            }
        }
    }
}
