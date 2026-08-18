#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maxn=0,maxi=0;
    for(int i=1;i<=7;++i)
    {
        int x,y;
        cin>>x>>y;
        if((x+y)>8)
        {
            if(maxn<(x+y)){
                maxi=i;
                maxn=x+y;
            }
        }
    }
    
    cout<<maxi<<'\n';
    
    return 0;
}