#include<bits/stdc++.h>
using namespace std;

int n;
int a[105];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i],a[j]);
        cout<<"Buoc "<<i<<": ";
        for(int j=1;j<=n;j++) cout<<a[j]<<" ";
        cout<<endl;
    }
}
