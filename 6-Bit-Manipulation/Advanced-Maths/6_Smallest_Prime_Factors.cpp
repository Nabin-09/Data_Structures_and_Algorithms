// Return all the prime factors of a number in sorted order and we will be passing queries.
// https://youtu.be/glKWkmKFlMw?feature=shared
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
vector<int> PrimeFactors(vector<int> queries)
{
    vector<int> spf(1e5 + 1);
    for (int i = 1; i < 1e5; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i * i <= 1e5; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= 1e5; j = j + i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    for(int i = 0 ; i < queries.size() ; i++){
        int n = queries[i];
        while(n!= 1){
            cout<<spf[n]<<endl;
            n = n /spf[n];
        }
    }
}
int main()
{
    /*Best Approach is finding the smallest Prime factor a number
    before we actually start to factorise the number.
    Precomputations on number is very much similar to what we did with
    Sieve of eratosthenes*/
    return 0;
}
