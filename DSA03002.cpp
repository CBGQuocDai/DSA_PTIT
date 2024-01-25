#include<bits/stdc++.h>
using namespace std;
int a,b;
int minn(int x)
{
    string s=to_string(x);
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='6' ) s[i]='5';
        ans=ans*10+s[i]-'0';
    }
    return ans;
}
int maxx(int x)
{
    string s=to_string(x);
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='5' ) s[i]='6';
        ans=ans*10+s[i]-'0';
    }
    return ans;
}
int main()
{
    cin>>a>>b;
    int c=minn(a);
    int d=minn(b);
    int e=maxx(a);
    int f=maxx(b);
    cout<<c+d<<" "<<e+f<<endl;
}
