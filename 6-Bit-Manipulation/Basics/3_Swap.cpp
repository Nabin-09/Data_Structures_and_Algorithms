//Swap two numbers without using any temporary variable.
#include<iostream>
using namespace std;
void swap (int &a , int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main()
{
    int a , b ;
    cin >> a >> b;
    cout << a << "  "<< b<<endl;
    swap(a , b);
    cout<< a << "  "<< b << endl;
    return 0;
}
