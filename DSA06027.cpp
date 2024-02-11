#include<bits/stdc++.h>
using namespace std;

int t;

int n;
vector<int> a;
vector<vector<int>> v;
int main()
{
    cin>>t;
    while(t--)
    {
        a.clear();
        v.clear();
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j]) swap(a[i],a[j]);
            }
            v.push_back(a);
        }
        int d=v.size()-1;
        for(int i=d;i>=0;i--)
        {
            cout<<"Buoc "<<i+1<<": ";
            for(int j=0;j<n;j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }
    }
}
