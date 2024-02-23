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
        int vt=0;
        for(int i=0;i<m;i++)
            if(f==a[i]) {vt=i;break;}
        string res="";
        while(vt!=0)
        {
            int k=vt%2;
            vt=vt/2;
            res=char(k+'0')+res;
        }
        while(res.size()<n) res="0"+res;
        cout<<res<<endl;
    }
}
