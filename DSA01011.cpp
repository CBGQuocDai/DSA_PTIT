#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        int gg;
        cin>>gg;
        cin>>s;
        n=s.size();
        int vt=n-2;
        while(vt>=0&&s[vt]>=s[vt+1]) vt--;
        cout<<gg<<" ";
        if(vt!=-1)
        {
            int y=n-1;
            while(s[vt]>=s[y] && y>vt) y--;
            swap(s[y],s[vt]);
            int l=vt+1;
            int r=n-1;
            while(l<=r)
            {
                swap(s[l],s[r]);
                l++;
                r--;
            }
            cout<<s<<endl;
        }
        else cout<<"BIGGEST"<<endl;
    }
}
