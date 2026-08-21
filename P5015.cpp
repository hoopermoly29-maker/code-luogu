#include <bits/stdc++.h>
using namespace std;

int ans;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s; 
    while(getline(cin,s))
    {
        int cnt=s.size();
        for(int i=0;i<s.size();++i)
            if(s[i]==' ') --cnt;
        ans+=cnt;
    }

    cout<<ans<<'\n';
}