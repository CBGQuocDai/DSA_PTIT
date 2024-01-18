#include<bits/stdc++.h>
using namespace std;
int n;
int a[10];
bool check(int a[])
{
    int l=1;
    int r=n;
    while(l<r)
    {
        if(a[l]==a[r]) {
            l++;
            r--;
        }
        else return false;
    }
    return true;
}
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++) a[i]=0;
    bool f=1;
    while(f)
    {
        if(check(a))
        {
            for(int i=1;i<=n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        int j=n;
        while(a[j]==1 && j>=1)
        {
            j--;
        }
        if(j==0) break;
        a[j]=1;
        for(int k=j+1;k<=n;k++) a[k]=0;
    }

}
