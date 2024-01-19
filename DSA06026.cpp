#include<bits/stdc++.h>
using namespace std;

int n,a[105];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int d=1;
    while(true)
    {
        int f=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i+1])
                swap(a[i],a[i+1]),f=1;
        }
        if(f==0) break;
        cout<<"Buoc "<<d<<": ";
        for(int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
        d++;
    }
}
