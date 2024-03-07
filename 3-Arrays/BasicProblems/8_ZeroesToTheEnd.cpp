#include<iostream>
#include<vector>
using namespace std;
void TakeInput(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "Enter the " << i + 1 << "st element of array: ";
            cin >> arr[i];
        }
        else if (i == 1)
        {
            cout << "Enter the " << i + 1 << "nd element of array: ";
            cin >> arr[i];
        }
         else if (i == 2)
        {
            cout << "Enter the " << i + 1 << "rd element of array: ";
            cin >> arr[i];
        }
         else 
        {
            cout << "Enter the " << i + 1 << "th element of array: ";
            cin >> arr[i];
        }
    }
}
vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return a;
    for(int i = j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    cout<<"Enter the size of array : "<<endl;
    int n;
    cin>>n;
    vector<int> a;
    TakeInput(a,n);
    a = moveZeros(n,a);
    cout<<"The resultant array : "<<endl;
    for(int i =0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
