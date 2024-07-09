#include<iostream>
using namespace std;
int main()
{
    int n ;
    bool flag = true;
    cin>>n;
    for(int i = 2 ; i*i<= n; i++ ){
        if(n % i == 0){
            cout<<n<<" is not a prime number !"<<endl;
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<n<<" is a prime number !"<<endl;
    }

    return 0;
}
