#include<iostream>
#include<algorithm>
using namespace std;
void sieve(int n ){
    bool primes[n+1];
    for(int i = 0 ; i < n-1 ; i++){
        primes[i] = true;
    }
    primes[0] = primes[1] = false;
    for(int i = 2 ; i <= n ; i++){
        if(primes[i]){
            cout<<i<<endl; // prints all prime numbers till n
            for(int j = i*i ; j<=n ; j+=i ){
                primes[j] = false;
            }
        }
    }

}
//T.C is O(NLogLogN)
int main()
{
    int n ;
    cin>>n;
    sieve(n);
    return 0;
}
