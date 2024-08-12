//Toggle the i-th bit 
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n; // Enter the number
    int i ;
    cin >> i; // Enter the ith bit you want to toggle
    cout<<(n^(1<<i)); //simple logic implement and check
    return 0;
}
