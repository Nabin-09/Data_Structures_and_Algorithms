//Calculate the number of set bits in a number
#include<iostream>
using namespace std;
int CountSetBits(int n ){
    int count = 0 ;
    while(n>1){
        //if(n % 2 == 1) count++;
        //n = n / 2;
        //Simple logic of converting number and checking the remainders
        //BETTER IMPLEMENTATION 
        count += (n & 1);
        n >>= 1; //this is equal to n/2 , hence use it as its faster
        //Use (n&1) to check if number is odd , TRUE for odd number and FALSE for even.
    }
    if(n == 1) count++;
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout<<CountSetBits(n)<<endl;
    return 0;
}
