#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,k; cin>>n;
    int w=52;

    for(int k=1;;++k)
    {
        x=(n/w-21*k)/7;
        if(w*(7*x+21*k)==n&&x<=100)
        {
            cout<<x<<'\n'<<k<<'\n';
            break;
        }
    }

    return 0;
}