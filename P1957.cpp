#include <bits/stdc++.h>
using namespace std;

int cal(int a,int b,int c)
{
    int res=0;
    if(a<=0) ++res;
    if(b<=0) ++res;
    if(c<=0) ++res;
    while(a)
    {
        ++res;
        a/=10;
    }
    while(b)
    {
        ++res;
        b/=10;
    }
    while(c)
    {
        ++res;
        c/=10;
    }
    return res+2;
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int i; cin>>i;
    string s,_s;
    while(i--)
    {
        cin>>s;
        if(s=="a"||s=="b"||s=="c")
        {
            int a,b,c; cin>>a>>b; _s=s;
            cout<<a;
            if(s=="a")
            {
                c=a+b;
                cout<<"+"<<b<<"="<<c<<'\n';
            }
            else if(s=="b")
            {
                c=a-b;
                cout<<"-"<<b<<"="<<c<<'\n';
            }
            else if(s=="c")
            {
                c=a*b;
                cout<<"*"<<b<<"="<<c<<'\n';
            }
            cout<<cal(a,b,c)<<'\n';
        }

        else
        {
            int a,b,c; cin>>b; a=stoi(s); s=_s;
            cout<<a;
            if(s=="a")
            {
                c=a+b;
                cout<<"+"<<b<<"="<<c<<'\n';
            }
            else if(s=="b")
            {
                c=a-b;
                cout<<"-"<<b<<"="<<c<<'\n';
            }
            else if(s=="c")
            {
                c=a*b;
                cout<<"*"<<b<<"="<<c<<'\n';
            }
            cout<<cal(a,b,c)<<'\n';
        }
    }

    return 0;
}