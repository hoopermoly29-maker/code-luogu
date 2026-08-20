#include <bits/stdc++.h>
using namespace std;

const int N=42;
int a[N][N];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n; cin>>n;
    a[1][n/2+1]=1;
    int cnt=1;
    int l_x=1,l_y=n/2+1;
    while(cnt<n*n)
    {
        if(l_x==1&&l_y==n)
             a[++l_x][l_y]=++cnt;
        else if(l_x==1)
        {
            a[n][++l_y]=++cnt;
            l_x=n;
        }
        else if(l_y==n)
        {
            a[--l_x][1]=++cnt;
            l_y=1;
        }
        else
        {
            if(a[l_x-1][l_y+1]==0)
                a[--l_x][++l_y]=++cnt;
            else a[++l_x][l_y]=++cnt;
        }
    }

    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }

    return 0;
}