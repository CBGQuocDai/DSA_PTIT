#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
int t;
int n;
int a[maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int d=0;
        for(int i=1;i<n;i++)
        {
            int vt=min_element(a+i+1,a+n+1)-a;
            if(a[vt]<a[i]){
                swap(a[i],a[vt]);
                d++;
            }
        }
        cout<<d<<endl;
    }
}
