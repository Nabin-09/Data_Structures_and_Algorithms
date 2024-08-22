/*You are given an array of numbers , two distinct numbers appear only once and others appear twice , find the ones
which are distinct and return them in any order*/
 /*Use Hashing for Brute Force Method :
    eg : arr = {1 , 3  , 4  , 14 , 1  , 3 , 7 , 7}
    if we XOR all the above numbers , the ones that appear twice will become 0 and we will
    be left with 14 ^ 4 = 1010(10)
    We observe in two distinct number atleast one bit is different as they are different numbers
    we also know num - 1 in binary is represented as its rightmost set bit is converted to 0 and the remaining to 1's
    example , 10 = (1010) and 9 = (1001)
    and when we num & (num - 1) , rightmost bit and all the zeroes are turned to 0 
    and if we xor the resultant with num the rightmost bit gets turned on
    and with this we will get two numbers to put them into two different buckets
    */
#include<iostream>
#include<vector>
using namespace std;

void SingleNumber(vector<int> arr) {
    int xorr = 0;
    int n = arr.size();

    // XOR all elements in the array
    for(int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }

    // Find the rightmost set bit in xorr
    int rightmost = xorr & -xorr;

    int b1 = 0, b2 = 0;

    // Divide the numbers into two buckets based on the rightmost set bit
    for(int i = 0; i < n; i++) {
        if(arr[i] & rightmost)
            b1 = b1 ^ arr[i];
        else
            b2 = b2 ^ arr[i];
    }

    cout << b1 << " " << b2 << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    SingleNumber(arr);
    return 0;
}
