# Recursion 
 
 When a function calls itself directly or indirectly is called Recursion.<br>

 Better Understanding : <br>
 If the solution of a big problem depends upon the small solution of same type of problem ,<br> we use recursion in such cases.<br>

 ## Basic terms : 

 ### Base Case :

 Where to stop recursion such as when finding a factorial we stop when n reaches 1 .<br> If we will not have a base case program will run into segmentation fault.(stack overflow).

 ### Recursive expression : 

 A recursive expression is a mathematical or logical formula that defines a value in terms<br>of itself, usually with a basecase to stop the recursion. <br>
 such as for Factorial it is : <br>
 n . f(n-1)
<br>

### Tail Recursion VS head recursion :

In tail recursion , the recursive call is the last intruction of the function , but in case of <br> it can be anywhere in the program.


Program to print numbers :
```cpp
void print(int i , int n ){
    if (i == n) return;
    cout << i << " ";
    print(++i , n);
}
int main(){
    int n ;
    cin >> n;
    print(1 ,n);
}
```

## Recursion in arrays :

Solve some of the basic Questions like : 
- Say Digits
- Fibonacci Series
- Count Stairs
- If Array is Sorted 
- Linear Search 
- Binary Search 

## Recursion in strings : 

Solve these basic Questions : 
 - Reverse a String
 - Palindrome String
 - Binary Exponentiation
 




