//Print name n times using recursion
#include <bits/stdc++.h>
using namespace std;
void name(int i , int n){
    if(i > n){
        return;
    }
    cout<<"Nabin"<<endl;
    name(i+1 , n);
}

int main() {
         int n;
         cout<<"No of times name name should be displayed: "<<endl;
         cin >> n;
         name(1 , n);
    return 0;
}
//T.C = O(N)
//S.C = O(N)