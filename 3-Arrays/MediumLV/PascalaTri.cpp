#include<iostream>
using namespace std;
int factorial(int n){
    if(n>0){
        return n*factorial(n-1);
    }
    else return 1;
}
int main()
{
    int row,col;
    cout<<"Enter the row and coloumn respectively : ";
    cin>>row>>col;
    cout<<"Element of pascal's triangle in the desired row and coloumn : ";
    cout<<(factorial(row-1)/(factorial((row-1)- (col-1))*factorial(col-1)));
    return 0;
}
