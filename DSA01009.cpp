#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<string> ans;
string tmp="";
int d[104];
void xuly(int x)
{
    for(int i=0;i<=1;i++)
    {
        if(i==0)
        {
            if(d[x-1]==k) continue;
            d[x]=d[x-1]+1;
            tmp=tmp+"A";
            if(x==n)
            {
                if(*max_element(d+1,d+n+1)==k) ans.push_back(tmp);
            }
            else xuly(x+1);
            tmp.erase(tmp.size()-1,1);
        }
        else
        {
            d[x]=0;
            tmp=tmp+"B";
            if(x==n)
            {
                if(*max_element(d+1,d+n+1)==k) ans.push_back(tmp);
            }
            else xuly(x+1);
            tmp.erase(tmp.size()-1,1);
        }

    }
}


int main()
{
    cin>>n>>k;

    xuly(1);
    cout<<ans.size()<<endl;
    for(auto x:ans)
        cout<<x<<endl;
}
