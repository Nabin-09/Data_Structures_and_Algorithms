//Flip Minimum bits to convert number A to B
#include<iostream>
using namespace std;
int MinimumBitFlips(int start , int goal){
    /*
    Start = 10 (1010)
    Goal = 7 (0111)
    Minimum bits needed to be changed is 3,
    Start = 3(0 1 1) , Goal = 4 (1 0 0) , Minimum bits needed to be flipped = 3
    XOR Operator works on different Bits.
    A B O/P
    0 0 0
    0 1 1
    1 0 1
    1 1 0
    ans = start ^ goal (number of set bits here are the number of bits needed to be flipped)
    and the count number of set bits in ans and return
    */
   int ans = (start ^ goal);
   int count = 0 ;
   for(int i = 0 ; i < 31 ; i++){
      if(ans & (1 << i )) count++;
   }
   return count;
}
int main()
{
    int a , b;
    cin >> a >> b;
    cout<<MinimumBitFlips(a,b);
    return 0;
}
