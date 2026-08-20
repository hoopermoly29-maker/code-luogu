#include <bits/stdc++.h>
using namespace std;

const int N=103,_N=1e5+3;
int a[N],sum[_N],cnt;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n; cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i];

    int m=1e5+3,M=0;
    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            ++sum[a[i]+a[j]];
            m=min(m,(a[i]+a[j])),M=max(M,(a[i]+a[j]));
        }
    }

    for(int i=1;i<=n;++i)
    {
        if(sum[a[i]]) ++cnt;
    }
    cout<<cnt<<'\n';

    return 0;
}