//Given an integer n find the xor all numbers from 1 to N
#include<iostream>
using namespace std;
int main()
{
    
    /*We could Simple iterate through elements
    ans = 0;
    for(int i = 0 ; i < n ; i++){
      ans = ans ^ i;
    }
    it has T.C = O(n) , S.C = O(1)
    Find a pattern 
    n = 1  ans = 1
        2        3
        3        0
        4        4
        
        5        1
        6        3
        7        0
        8        4
        
        9        1
        10       3
        11       0
        12       4
        */
       int n ;
       cin >> n;
       if(n % 4 == 1) cout<<1<<endl;
       else if(n%4 == 2) cout<<n+1<<endl;
       else if(n % 4 == 3) cout<<0<<endl;
       else cout<<n<<endl;
       /*XOR from L to R
       int computeXOR(int n) {
        if (n % 4 == 0)
        return n;
        if (n % 4 == 1)
        return 1;
        if (n % 4 == 2)
        return n + 1;
        return 0;
    }
       return computeXOR(R) ^ computeXOR(L - 1);*/
    return 0;
}
