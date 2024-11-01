#include <iostream>
using namespace std;
int Power(int a , int n ){
    if(n == 1 ) return a;
    else{
        int b , c;
        int mid = n / 2;
         b = Power(a , mid);
         c = b*b;
        if(n % 2 == 0) return c;
        else return c*a;
    }
}

int main() {
    int a , n;
    cin >> a >> n;
    cout<<Power(a , n);
    return 0;
}