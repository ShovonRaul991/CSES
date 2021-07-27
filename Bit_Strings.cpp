#include<bits/stdc++.h>
using namespace std;
# define mod 1000000007
long long power(long long n,long long p)
{
    int res=1;
    n=n%mod; //update n if it is more than or equal mod
    if(n==0)
        return 0;
    while(p)
    {
        if(p&1)  //y%2!=0
            res=(res*n)%mod;
        p=p>>1; //p=p/2
        n=(n*n)%mod;
    }
    return res;
}


int main()
{
    long long n;
    cin>>n;
    cout<<power(2,n);
    return 0;
}