#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;++i)
        if(n%i==0) return false;
    return true;
}

int main()
{
    int n; cin>>n;
    for(int i=2;i*i<n;++i)
    {
        if(n%i==0)
        {
            if(check(i)&&check(n/i))
            {
                cout<<n/i<<'\n';
                break;
            }
        }
    }

    return 0;
}