#include<bits/stdc++.h>
using namespace std;
int t;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s.size();
        stack<int> num;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                num.push(s[i]-'0');
            }
            else
            {
                int a=num.top();
                num.pop();
                int b=num.top();
                num.pop();
                if(s[i]=='+')
                {
                    num.push(a+b);
                }
                if(s[i]=='-')
                    num.push(a-b);
                if(s[i]=='*')
                    num.push(a*b);
                if(s[i]=='/')
                    num.push(a/b);
            }
        }
        cout<<num.top()<<endl;
    }
}

