#include<bits/stdc++.h>
using namespace std;
int t;
int n;
string f;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>f;
        n=f.size();
        int tmp=0;
        for(int i=0;i<n;i++)
        {
            if(f[i]=='1') tmp+=(1<<(n-1-i));
        }
        vector<string> a;
        a.push_back("0" );
        a.push_back("1");
        int m=a.size();
        while(a[0].size()<n)
        {
            for(int i=m-1; i>=0; i--)
                a.push_back("1"+a[i]);
            for(int i=0; i<m; i++)
                a[i]="0"+a[i];
            m=a.size();
        }
        cout<<a[tmp]<<endl;
    }
}
