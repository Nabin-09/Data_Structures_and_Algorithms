#include<iostream>
using namespace std;
int Ncr(int n,int r)
   {
     int ans=1;
     for(int i=1;i<=r;i++)
     {
        ans=ans*(n-(i-1));
        ans=ans/i;
     }
     return ans;
   }
   //next one is optimised
int main()
{
    int row;
    cout<<"Enter the row you want to be printed : ";
    cin>>row;
    for(int i = 1;i<=row;i++){
        cout<<Ncr(row-1,i-1)<<" ";
    }
    return 0;
}
