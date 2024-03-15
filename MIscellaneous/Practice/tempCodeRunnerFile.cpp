#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> DecimalToBinary(int n){
    vector<int> bin;
    while(n>0){
        bin.push_back(n%2);
        n = n/2;
    }
    reverse(bin.begin(),bin.end());
    return bin;
    
}
int main()
{
    int n;
    cout<<"enter"<<endl;
    cin>>n;
    vector<int> bin;
    bin = DecimalToBinary(n);
    for(int i=0;i< bin.size();i++){
        cout<<bin[i];
    }
    return 0;
}
