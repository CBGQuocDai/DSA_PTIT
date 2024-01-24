#include<bits/stdc++.h>
using namespace std;
int n;
int a[30];
vector<int> v;
vector<string> ans;
void xuly(int x)
{
    for(int i=0; i<=1; i++)
    {
        if(i==1)
        {
            v.push_back(a[x]);
        }
        if(x==n)
        {
            int f=1;
            int m=v.size();
            if(m>1)
            {
                for(int j=0; j<m-1; j++)
                    if(v[j]>v[j+1])
                    {
                        f=0;
                        break;
                    }
                if(f==1)
                {
                    string tmp="";
                    for(auto g: v)
                        tmp=tmp+to_string(g)+" ";
                    ans.push_back(tmp);
                }
            }
        }
        else xuly(x+1);
        if(i==1) v.pop_back();
    }
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    xuly(1);
    sort(ans.begin(),ans.end());
    for(auto x:ans)
        cout<<x<<endl;
}
