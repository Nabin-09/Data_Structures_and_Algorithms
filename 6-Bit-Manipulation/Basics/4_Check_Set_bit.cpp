//Problem statement lists to check the if the i-th bit of the number is 1 or not.
#include<iostream>
using namespace std;
bool checkKthBit(int n, int k) {
        return (n>>k) & 1;
}
int main()
{
    int n ;
    cin >> n;
    int k ; //the position of i-th bit(remember counting starts from LSB).
    cin >> k;
    cout<<checkKthBit(n , k);
    return 0;
}
