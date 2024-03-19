#include <iostream>
using namespace std;
    void swap(int &a, int &b)
    {
        a = (a & b) + (a | b);
        b = a + (~b) + 1;
        a = a + (~b) + 1;
    }
int main()
{
 int a , b;
    cout<<"Enter the numbers : "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"After swap : "<<a<<" "<<b<<endl;
    return 0;
}

