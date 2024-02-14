
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1004][1004];

int main()
{
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) a[i][j]=0;
    for(int i=1;i<=n;i++)
    {
        string x;
        getline(cin,x);
        stringstream ss(x);
        string s;
        while(ss>>s)
        {
            int tmp=0;
            for(int j=0;j<s.size();j++)
                tmp=tmp*10+s[j]-'0';
            a[i][tmp]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
