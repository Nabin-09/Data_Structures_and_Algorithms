#include <iostream>
#include <vector>

using namespace std;

void takeInput(vector<int>& a) {
  int ele;
  cout << "Enter the elements (enter a non-numeric value to stop): "<<endl;
  while (cin >> ele) {
    a.push_back(ele);
  }
}

void PrintVector(const vector<int>& a) {
  cout << "Elements in the Vector: " << endl;
  for (int ele : a) {
    cout << ele << " ";
  }
  cout << endl;
}

int main() {
  vector<int> a;
  takeInput(a);
  PrintVector(a);
  return 0;
}
