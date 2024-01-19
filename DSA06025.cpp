#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<"Buoc 0: "<<a[1]<<endl;
    for(int i=2;i<=n;i++)
    {
        int j=1;
        while(a[j]<a[i]&& j<i) j++;
        int f=a[i];
        for(int k=i-1;k>=j;k--)
        {
            a[k+1]=a[k];
        }
        a[j]=f;
        cout<<"Buoc "<<i-1<<": ";
        for(int k=1;k<=i;k++)
            cout<<a[k]<<" ";
        cout<<endl;
    }
}
