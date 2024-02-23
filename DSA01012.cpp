#include<bits/stdc++.h>
using namespace std;
int t,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
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
        for(auto g:a)
            cout<<g<<" ";
        cout<<endl;
    }
}
