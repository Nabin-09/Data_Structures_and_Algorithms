#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0; // Initialize count to zero

    while (n > 0) {
        if (n >= 5) {
            count += n / 5;
            n = n % 5;
        } else if (n >= 4) {
            count += n / 4;
            n = n % 4;
        } else if (n >= 3) {
            count += n / 3;
            n = n % 3;
        } else if (n >= 2) {
            count += n / 2;
            n = n % 2;
        } else if (n == 1) {
            count += 1;
            n = 0;
        }
    }

    cout << count <<endl;
    return 0;
}
