//Change the bit of index given of a number and return it
#include<iostream>
using namespace std;
int SetIthBit(int n , int k ){
    return (n|(1<<k));
}
int main()
{
    int n ;
    cin >> n; // the number
    int k;
    cin >> k; // index of what bit you want to be set.
    cout<<SetIthBit(n,k)<<endl;
    return 0;
}
