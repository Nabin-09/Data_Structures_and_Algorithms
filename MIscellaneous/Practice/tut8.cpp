#include<iostream>
using namespace std;
int arc(int i , int j){
    if(i<2) return j + 2;
    else if (j<2) return arc(i-1,1);
    else return arc(i-1,arc(i,j-2));
}
int main()
{
    cout<<arc(2,6);
    return 0;
}
