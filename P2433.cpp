#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pi=3.141593,r=5.0;
    int n; cin>>n;
    if(n==1) cout<<"I love Luogu!"<<'\n';
    else if(n==2) cout<<"6 4"<<'\n';
    else if(n==3)
    {
        int x=14/4;
        cout<<x<<'\n'<<4*x<<'\n'<<14-4*x<<'\n';
    }
    else if(n==4) 
    {
        double x=500.0/3;
        cout<<setprecision(6)<<x<<'\n';
    }
    else if(n==5) cout<<(260+220)/(12+20)<<'\n';
    else if(n==6)
    {
        double x=sqrt(9*9+6*6);
        cout<<x<<'\n';
    }
    else if(n==7) cout<<110<<'\n'<<90<<'\n'<<0<<'\n';
    else if(n==8) cout<<2.0*pi*r<<'\n'<<pi*r*r<<'\n'<<pi*r*r*r*4.0/3.0<<'\n';
    else if(n==9) cout<<22<<'\n';
    else if(n==10) cout<<9<<'\n';
    else if(n==11) cout<<100.0/3<<'\n';
    else if(n==12) cout<<(int)('M'-'A'+1)<<'\n'<<(char)('A'-1+18)<<'\n';
    else if(n==13) cout<<(int)(cbrt(pi*4.0*4.0*4.0*4.0/3.0+pi*10.0*10.0*10.0*4.0/3.0))<<'\n';
    else if(n==14) cout<<50<<'\n';
        
    return 0;
}