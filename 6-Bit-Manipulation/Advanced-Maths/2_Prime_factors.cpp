//Finding all the prime facotors of a number in a better approach
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
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
    //Start looping till sqrt(n) from 1
    vector<int> ans;
    int n ;
    cin >> n;
    for(int i = 1 ; i < sqrt(n) ; i++){
        if(n%i == 0){
            if(prime(i)) ans.push_back(i);
            if((n/i) != i){
                if(prime(n/i)) ans.push_back(i);
            }
        }
    }
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//T.C = sqrt(sqrt(N) * sqrt(N)*2)
