#include<bits/stdc++.h>
using namespace std;
void xuly(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<a<<" -> "<<c<<endl;
    }
    else
    {
        xuly(n-1,a,c,b);
        xuly(1,a,b,c);
        xuly(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cin>>n;
    xuly(n,'A','B','C');
}
