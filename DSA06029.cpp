
#include<bits/stdc++.h>
using namespace std;

int t;

int n;
vector<int> a;
vector<vector<int>> v;
int main()
{
    t=1;
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
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            if(i==0) b.push_back(a[i]);
            else
            {
                int f=1;
                for(int j=0;j<i;j++)
                {
                    if(b[j]>a[i])
                    {
                        b.insert(b.begin()+j,a[i]);
                        f=0;
                        break;
                    }
                }
                if(f==1) b.push_back(a[i]);
            }
            v.push_back(b);
        }
        int d=v.size()-1;
        for(int i=d;i>=0;i--)
        {
            cout<<"Buoc "<<i<<": ";
            for(int j=0;j<v[i].size();j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }
    }
}
