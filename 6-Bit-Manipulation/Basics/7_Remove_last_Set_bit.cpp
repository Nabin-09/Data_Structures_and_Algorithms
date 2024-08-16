//Remove the rightmost setbit of number
#include<algorithm>
#include<iostream>
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
    cin >> n;
    cout<<ConvertDecimalToBinary(n)<<endl;
    n = n & n - 1;
    cout<<ConvertDecimalToBinary(n);
    /*LOGIC :
    Suppose n = 6 (110)
    then n - 1 = 5 (101)
    n = 40 (1 0 1 0 0 0)
    n-1 = 39(1 0 0 1 1 1)
    n = 16 (1 0 0 0 0 )
    n - 1 - 15 (0 1 1 1 1)
    Hence we can clearly observe when we subtract the number , the rightmost bit becomes 0 ,
    and all the bits after it turn to 1 hence if we & n and (n-1) we can remove the righmost
    bit while keeping all the other bits exactly the same,
    */
    return 0;
}
