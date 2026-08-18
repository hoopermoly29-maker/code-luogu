#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c; cin>>a>>b>>c;
    int M,m;
    M=max(a,max(b,c));
    m=min(a,min(b,c));

    for(int i=2;i<m;++i)
    {
        if(m%i==0&&M%i==0)
        {
            m=m/i;
            M/=i;
        }
    }
    
    cout<<m<<"/"<<M<<'\n';
    
    return 0;
}