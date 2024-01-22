#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t;
int n,k;
int a[maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--)
    {
        deque<int> dq;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        dq.push_back(1);
        for(int i=2; i<=k; i++)
        {
            while(a[dq.back()]<=a[i])
            {
                dq.pop_back();
                if(dq.size()==0) break;
            }
            dq.push_back(i);
        }
        cout<<a[dq.front()]<<" ";
        for(int i=2; i<=n-k+1; i++)
        {
            int r=i+k-1;
            while(a[dq.back()]<a[r])
            {
                dq.pop_back();
                if(dq.size()==0) break;
            }
            dq.push_back(r);
            while(dq.front()<i)
            {
                dq.pop_front();
                if(dq.size()==0) break;
            }
            cout<<a[dq.front()]<<" ";
        }
        cout<<endl;
    }
}
