//Calculate all the subsets of a set
#include<iostream>
#include<vector>
using namespace std;
/*POWER SET :
 nums = [1,2,3]
 all its substs = {[1] , [2] , [3] , [1,2] , [2,3] , [1,3] , [1,2,3] ,[] }
 No of elements in power set = 2^n(8 in above case)
 How do it using bit manipulation , use indexes 
 2   1   0 [indexes]
 0   0   0  [0 = don't include element of index in array]
 0   0   1  [1 = include the element in array   ]
 0   1   0
 0   1   1
 1   0   0
 1   0   1
 1   1   0
 1   1   1
 */
int main()
{
    
    vector<int> arr ;
    cout<<"Enter the number of elements : "<<endl;
    int n ;
    cin >> n;
     arr.resize(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int subsets = (1 << n);
    vector<vector<int>> ans;

    for (int num = 0; num < subsets; num++) {
        vector<int> list;
        for (int i = 0; i < n; i++) {
            if (num & (1 << i)) {
                list.push_back(arr[i]);
            }
        }
        ans.push_back(list);
    }

    // Print all subsets
    for (const auto& subset : ans) {
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}
