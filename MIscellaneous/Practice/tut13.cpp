#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum = 0;
    while(t--){
        int sol[3];
        for(int i = 0;i<3;i++){
            cin>>sol[i];
        }
       
        int count = 0;
        for(int i = 0;i<3;i++){
            if(sol[i] == 1){
            count++;
            if(count>=2)
            sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}
