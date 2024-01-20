#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t;
int n;
int a[maxn];
void Hop(int a[], int l,int r,int mid)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int left[n1+4],right[n2+4];
    for(int i=1; i<=n1; i++)
        left[i]=a[l+i-1];
    for(int i=1; i<=n2; i++)
        right[i]=a[mid+i];
    int i=1;
    int j=1;
    int k=l;
    while(i<=n1&&j<=n2)
    {
        if((left[i]<right[j]))
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<=n1)
    {
        a[k]=left[i];
        k++;
        i++;
    }
    while(j<=n2)
    {
        a[k]=right[j];
        k++;
        j++;
    }
}
void sapxep(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        sapxep(a,l,mid);
        sapxep(a,mid+1,r);
        Hop(a,l,r,mid);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sapxep(a,1,n);
        for(int i=1; i<=n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
