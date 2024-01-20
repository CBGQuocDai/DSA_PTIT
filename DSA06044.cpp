#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int n;
int a[maxn];
int b[maxn];

int main()
{
    cin>>n;
    int d1=0;
    int d2=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        if(i%2==0)
        {
            b[++d2]=x;
        }
        else a[++d1] =x;
    }
    sort(a+1,a+d1+1);
    sort(b+1,b+d2+1);
    int d=0;
    while(true)
    {
        cout<<a[1+d]<<" "<<b[d2-d]<<" ";
        d++;
        if(1+d>d1) break;
        if(d2-d==0) break;
    }
    if(1+d==d1) cout<<a[d1]<<endl;
}
