#include<iostream>
    #include<vector>
    using namespace std;
    vector<int> getMoreAndLess(int arr[], int n, int x) {
	    int ele=0;
	   for(int i=0;i<=n;i++){
	       if(arr[i]>=x){
	           ele=n-1;
	           break;
	       }else if(arr[i]<=x){
	           ele=i;
	       }
	           
	       }
	    
	   
	
	return{ele};
};
int main (){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
      for(int i=0;i<=n;i++){
            cin>>arr[i];
        
    }
 vector < int >result= getMoreAndLess(arr,n,x);
    return 0;
}