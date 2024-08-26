#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    //Use the schoolbook method of division for best approach
    /*If a number is prime return itself, and hence run the loop till sqrt(n) , it will
    never enter the while loop*/
    vector<int> ans;
    int n;
    cin >> n;
    for(int i = 2 ; i < sqrt(n) ; i++){
        if(n % i == 0){
            ans.push_back(i);
            while(n%i == 0) n = n / i;
        }
    }
    if(n!=1) ans.push_back(n);
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<"  ";
    }
    return 0;
}
//T.C = O(sqrt(N) * logN)
