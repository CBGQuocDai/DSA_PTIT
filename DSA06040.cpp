#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int t;
int n1,n2,n3;
long long a[maxn];
long long b[maxn];
long long c[maxn];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2>>n3;
        for(int i=1; i<=n1; i++) cin>>a[i];
        for(int i=1; i<=n2; i++) cin>>b[i];
        for(int i=1; i<=n3; i++) cin>>c[i];
        int i=1;
        int j=1;
        int k=1;
        vector<long long> ans;
        while(i<=n1&&j<=n2&&k<=n3)
        {
            if(a[i]==b[j]&&a[i]==c[k])
            {
                ans.push_back(a[i]);
                i++;
                j++;
                k++;
            }
            else
            {
                if(a[i]<b[j]) i++;
                else if(b[j]<c[k])j++;
                else k++;
            }
        }
        if(ans.size()==0) cout<<"-1"<<endl;
        else
        {
            for(auto x:ans)
                cout<<x<<" ";
            cout<<endl;
        }
    }
}
