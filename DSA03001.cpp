#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
const int s[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int t;
int a[maxn];
int n;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int d=0;
        while(n>0)
        {
            int j=lower_bound(s,s+10,n)-s;
            if(j==n+1||s[j]>n) j--;
            d++;
            n-=s[j];
        }
        cout<<d<<endl;
    }
}
