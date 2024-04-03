#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum = 0;
    while(t--){
        int arr[3];
        for(int i = 0;i<3;i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i = 0;i<3;i++){
            if(arr[i] == 1)
            count++;
        }
        if(count>=2)
        sum++;
    }
    cout<<sum;
    return 0;
}
