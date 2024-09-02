#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define ll long long
int PrimesUsingSieve(ll n)
{
    bool primes[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        primes[i] = true;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == true)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                primes[j] = false;
            }
        }
    }
    for(int i = 2 ; i <= n ; i++){
        if(primes[i] == true) cout<<i<<endl;
    }
}

int main()
{
    ll n;
    cout<<"Enter the number : "<<endl;
    cin >> n;
    cout<<"Prime numbers between 2 and n : "<<endl;
    PrimesUsingSieve(n);
    return 0;
}
