#include<iostream>
using namespace std;
void Star(int n){
    for(int i = 1; i<=n; i++){
        if(i%3 == 0){
            for(int j = 1;j<=i;j++){
                cout<<"*";
            }
        }
        else
        cout<<i;
    }
}
int main()
{
    int n;
    cout<<"Enter the last number of the end of series : "<<endl;
    cin>>n;
    Star(n);
    return 0;
}
;