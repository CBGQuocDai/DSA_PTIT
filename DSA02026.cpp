#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
int f=0;
int capnhat()
{
    int a=(s[0]-'0')*10+s[1]-'0';
    int b=(s[5]-'0')*10+s[6]-'0';
    int c=(s[10]-'0')*10+s[11]-'0';
    if(s[3] =='+')
    {
        if(a +b==c) return 1;
        else return 0;
    }
    if(s[3] =='-')
    {
        if(a -b==c) return 1;
        else return 0;
    }
    if(s[3] =='*')
    {
        if(a *b==c) return 1;
        else return 0;
    }
    if(s[3] =='/'&&b!=0)
    {
        if(a /b==c && a%b==0) return 1;
        else return 0;
    }
    return 0;
}
void xuly(int x)
{
    if(f==1) return;
    if(x==n-1)
    {
        if(s[x]=='?')
        {
            for(int i=0; i<10; i++)
            {
                char k=char(i+'0');
                s[x]=k;
                f=capnhat();
                if(f==1) {cout<<s<<endl;return;}
                s[x]='?';
            }
        }
        else
        {
            f=capnhat();
            if(f==1) {cout<<s<<endl;return ;}
        }
    }
    else
    {
        if(s[x]=='?')
        {
            if(x==3)
            {
                s[x]='+';
                xuly(x+1);
                s[x]='-';
                xuly(x+1);
                s[x]='*';
                xuly(x+1);
                s[x]='/';
                xuly(x+1);
                s[x]='?';
            }
            else
            {
                for(int i=0; i<10; i++)
                {
                    if(i==0&&(x==0||x==5||x==10)) continue;
                    char k=char(i+'0');
                    s[x]=k;
                    xuly(x+1);
                    s[x]='?';
                }
            }
        }
        else xuly(x+1);
    }
}
int main()
{
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        f=0;
        n=s.size();
        xuly(0);
        if(f==0) cout<<"WRONG PROBLEM!"<<endl;
    }

}
