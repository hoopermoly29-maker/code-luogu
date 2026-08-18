#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,t,s; cin>>m>>t>>s;
    if(t==0) cout<<0<<'\n';
    else
    {
        int x=m-(s+t-1)/t;
        cout<<((x>0)?x:0)<<'\n';
    }
        
    return 0;
}