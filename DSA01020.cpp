#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[1003];

int main()
{
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n=a.size();
        int i=n-1;
        while(a[i]=='0' && i>=0) i--;
        if(i>=0)
        {
            a[i]='0';
            i++;
            for(i; i<n; i++) a[i]='1';
            cout<<a<<endl;
        }
        else
        {
            for(int i=0; i<n; i++) cout<<"1";
            cout<<endl;
        }
    }
}
