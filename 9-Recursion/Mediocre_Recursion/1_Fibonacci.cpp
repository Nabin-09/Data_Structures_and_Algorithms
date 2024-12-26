/*The series :
  0 1 1 2 3 5 8 13 21 34 55 89 .......
  */
 #include <bits/stdc++.h>
 using namespace std;
int Fibonacci(int n){
  if(n <= 1) return n;
  int last = Fibonacci(n-1);
  int slast = Fibonacci(n-2);
  return last + slast;
}
 
 int main() {
    int n;
    cin >> n;
    cout<<Fibonacci(n)<<endl;     
    return 0;
 }