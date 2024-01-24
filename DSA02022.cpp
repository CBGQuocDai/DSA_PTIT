#include<bits/stdc++.h>
using namespace std;
vector<string> v;
string s="2000";
string a[3]={"02","20","22"};
char b[2]={'0','2'};
void xuly(int x)
{
    for(int i=0;i<=1;i++)
    {
        s[x]=b[i];
        if(x==3) v.push_back(s);
        else xuly(x+1);
    }
}
int main()
{
    xuly(1);
    for(int i=0;i<3;i++)
    {
        for(auto x: v)
            cout<<a[i]<<"/02/"<<x<<endl;
    }
}
