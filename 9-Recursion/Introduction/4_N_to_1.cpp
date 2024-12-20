#include <bits/stdc++.h>
using namespace std;
void rev_num(int i , int n){
    if(i < 1){
        return ;
    }
    cout<<i<<endl;
    rev_num(i-1, n);

}
int main() {
         int n;
         cout<<"Enter the first number of series :"<<endl;
         cin >> n;
         rev_num(n , n);
    return 0;
}