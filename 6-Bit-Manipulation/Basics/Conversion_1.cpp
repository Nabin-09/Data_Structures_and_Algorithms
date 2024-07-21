#include<iostream>
#include<algorithm>
using namespace std;
string ConvertDecimalToBinary(int n ){
    if (n == 0) return "0";  // Special case for 0
    
    string res = "";
    while (n > 0) {
        if (n % 2 == 1) {
            res += "1";
        } else {
            res += "0";
        }
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    int n ;
    cin>> n;
    cout<<ConvertDecimalToBinary(n)<<endl;
    return 0;
}
