#include<iostream>
using namespace std;
long long gcd(long long a,long long b)
{

    if(a>=b) {
        long long r=a%b;
        if(r==0)
            return b;
        return (gcd(b,r));
    } else {
        long long r=b%a;
        if(r==0)
            return a;
        return (gcd(a,r));
    }
}

int main()
{

    long long a,b,r;
    cin>>a>>b;
    r=gcd(a,b);
    while(b!=1)
    {
        if(r==1)
        {
            cout<<"No";
            return 0;
                                                                                      
        }
        b/=r;
        r=gcd(r,b);
                                                   
    }
    cout<<"Yes";
    return 0;
}
