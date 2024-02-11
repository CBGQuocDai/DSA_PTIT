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
        while(true)
        {
            int f=1;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                    swap(a[i],a[i+1]),f=0;
            }
            if(f==1) break;
            v.push_back(a);
        }
        int d=v.size()-1;
        for(int i=d;i>=0;i--)
        {
            cout<<"Buoc "<<i+1<<": ";
            for(int j=0;j<v[i].size();j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }
    }
}
