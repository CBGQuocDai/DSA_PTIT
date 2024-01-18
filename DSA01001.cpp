#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        int j=s.size()-1;
        while(s[j]=='1' && j>=0) j--;
        if(j>=0) s[j]='1';
        for(int k=j+1; k<s.size(); k++)
            s[k]='0';
        cout<<s<<endl;

    }
}
