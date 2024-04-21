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
int main()
{
    int row,col;
    cout<<"Enter the row and coloumn respectively : ";
    cin>>row>>col;
    cout<<"Element of pascal's triangle in the desired row and coloumn : ";
    cout<<Ncr(row-1,col-1);
    return 0;
}
