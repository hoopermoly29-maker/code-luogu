#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int cnt=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=n-i+1;j>=1;--j)
        {
            if(cnt>9) cout<<cnt;
            else cout<<0<<cnt;
            ++cnt;
        }
        cout<<'\n';
    }
    
    return 0;
}