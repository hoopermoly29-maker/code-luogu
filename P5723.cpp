#include <bits/stdc++.h>
using namespace std;

int L,sum,cnt;

bool check(int x)
{
    for(int i=2;i<x;++i)
    {
        if(x%i==0) return false;
    }
    return true;
}

void func()
{
    int now=2;
    for(int i=now;;++i)
    {
        if(check(i)) 
        {
            if((sum+i)<=L)
            {
                cout<<i<<'\n';
                now=i;
                sum+=i;
                ++cnt;
            }
            else break;
        }
    }
}

int main()
{
    cin>>L;
    func();
    cout<<cnt<<'\n';
    
    return 0;
}