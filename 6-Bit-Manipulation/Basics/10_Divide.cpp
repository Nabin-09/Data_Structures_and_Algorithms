//Return the integer value after dividing two numbers
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int division (int dividend , int divisor){
  int ans = 0;
    if(dividend == divisor) return 1;
    
    bool sign = true;
    if ((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor > 0))
        sign = false;
    
    int n = abs(dividend);  // dividend
    int d = abs(divisor);   // divisor
    
    while(n >= d) {
        int count = 0;
        while(n >= (d << (count + 1))) { //d*(pow(2,count+1)) = (d << (count+1)) , simple maths
            count++;
        }
        ans += (1 << count);
        n -= (d * (1 << count));
    }
    
    // Overflow check
    if (ans >= INT32_MAX && sign == true)
        return INT32_MAX;
    else if (ans >= INT32_MAX + 1U && sign == false)
        return INT32_MIN;
    
    return sign ? ans : (-1 * ans);
}
int main()

{
    //Note : Integer stores only [-2^31 , 2^31 - 1] , if quotients overflows return INT_MAX
    /*Brute Force : Add the numbers until they reach the number suppose 
    n = 22 , k = 3 , we can do 3 + 3 + 3 + 3 + 3 + 3 + 3 + 3
    sum = 0 , cnt = 0 ;
    while(sum + divisor <= dividend){  divisor = k , dividend = n 
      cnt++;
      sum += divisor;
    }
    return cnt;
    T.C = O(Dividend)
    */
   /*Better Approach :
   Try to divide the dividend into powers of 2 ,
    22 = (3 * 7)
    22 = 3 * (2^2 + 2^1 + 2^0)
    Step 1 : Find the biggest number that is the multiple of divisor and power of 2 that can be removed
    3 * 2^0 = 3
    3 * 2^1 = 6
    3 * 2^2 = 12
    3 * 2^3 = 24 #Exceeds 22 and hence the previous value is considered (Store 2^2)
    Now the number left = 22 - 10 = 12
    repeat the steps ,
     3 * 2^0 = 3
    3 * 2^1 = 6
    3 * 2^2 = 12 #Exceeds 10 and hence the previous value is considered (Store 2^1)
    Now the value left is 10 - 6 = 4 and same steps are repeated again,
    3 * 2^0 = 3
    3 * 2^1 = 6 #Exceeds 4 and hence the previous value is considered (Store 2^0)
    Now 1 < Divisor , hence stop the algorithm
    Sum up all the stored values ,
    Sum = 2^2 + 2^1 + 2^0 = 7
    */
   int n , k ;
   cin>>n>>k;
   cout<<division(n,k)<<endl;
    return 0;
}