//Perform pow operation manually
//https://youtu.be/hFWckDXE-K8?feature=shared
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;
double exponent(double n, ll p) {
    double ans = 1.0;
    bool isNegative = false;

    // Handle negative exponent
    if (p < 0) {
        isNegative = true;
        p = -p;
    }

    while (p > 0) {
        if (p % 2 == 1) {  // If p is odd
            ans *= n;
            p--;
        } else {  // If p is even
            n *= n;
            p /= 2;
        }
    }

    // If the original exponent was negative, return the reciprocal
    if (isNegative) {
        return 1.0 / ans;
    }
    return ans;
}

//T.C = O(log2 N)
int main()
{
    /*Approach :
    if the power raised on n is odd we take out a n and make it even
    n^p , if p is odd , then we n^p = n * n^(p-1) and store n in other variable
    if power is even we sqaure the number and divide exponent by 2 
    */
   ll n , p ;
   cin >> n >> p;
   cout<<exponent(n,p);
    return 0;
}
