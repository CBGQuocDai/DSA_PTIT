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
        int a[1004]={0};
        a[0]=1;
        a[1]=1;
        for(int i=2; i<=n; i++)
        {
            if(s[i-1]>'0') a[i]=a[i-1];
            if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i-1] <= '6'))
                a[i]+=a[i-2];
        }
        if(s[0]=='0') cout<<"0"<<endl;
        else
            cout<<a[n]<<endl;
    }
}
