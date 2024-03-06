#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    int x;
    cin>>x;
    if(isPrime(x)) cout<<"yes";
    else cout<<"no";
    return 0;
}
