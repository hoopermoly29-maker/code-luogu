#include <bits/stdc++.h>
using namespace std;

const int N=103;
int a[N][N],ans;

int huoba_x[]={-2,-1,-1,-1,0,0,0,0,1,1,1,2};
int huoba_y[]={0,-1,0,1,-2,-1,1,2,-1,0,1,0};

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m,k; cin>>n>>m>>k;
    
    while(m--)
    {
        int x,y; cin>>x>>y; a[++x][++y]=1;
        for(int i=0;i<12;++i)
            a[x+huoba_x[i]][y+huoba_y[i]]=1;
    }

    while(k--)
    {
        int o,p; cin>>o>>p; 
        ++o,++p;
        for(int i=o-2;i<=o+2;++i)
            for(int j=p-2;j<=p+2;++j)
                a[i][j]=1;
    }

    for(int i=2;i<=n+1;++i)
        for(int j=2;j<=n+1;++j)
            if(!a[i][j]) ++ans;

    cout<<ans<<'\n';

    return 0;
}