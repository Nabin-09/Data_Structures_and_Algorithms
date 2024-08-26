//Print all prime factors of a number
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool prime(int n){
       if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n == 2) return true; // 2 is a prime number
    if (n % 2 == 0) return false; // even number greater than 2 is not prime
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    /*eg Prime factors of 
    60 = 2 , 3 , 5
    35 = 5 , 7
    780 = 2 , 3 , 5 , 13
    extreme naive approach - find all divisiors and check which is prime
     */
    vector<int> ans;
    int n ;
    cin >> n;
    for(int i = 2 ; i <= n;i++){
        if(n%i == 0){
            if(prime(i)){
                ans.push_back(i);
            }
        }
    }
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
