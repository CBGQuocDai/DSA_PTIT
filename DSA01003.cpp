#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[1004];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int vt=0;
        for(int i=1;i<n;i++)
            if(a[i]<a[i+1])
        {
                vt=i;
        }
        if(vt!=0){
        int j=min_element(a+vt+1,a+n+1)-a;
        swap(a[vt],a[j]);
        int l=vt+1;
        int r=n;
        while(l<r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;}
        else {
            for(int i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
        }

    }
}
