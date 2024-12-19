#include <bits/stdc++.h>
using namespace std;
void number(int i ,int n){
    if(i > n){
        return;
    }
    cout<<i<<endl;
    number(i+1 , n);
}
int main() {
    int n ;
    cout<<"Enter last number of series : "<<endl;
    cin >> n;
    number(1 , n);
    return 0;
}