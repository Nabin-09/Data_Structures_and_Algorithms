#include<iostream>
#include<cstdint>
using namespace std;
int countBits(uint32_t n) {
        int count = 0;
           while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
    }
int main()
{


  uint32_t number;
  cout << "Enter a non-negative integer: ";
  cin >> number;
  int weight = countBits(number);
  cout << "The Hamming weight of " << number << " is " << weight << std::endl;

  return 0;
}
