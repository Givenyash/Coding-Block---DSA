#include <iostream>
using namespace std;

int printIncreasing(int n) {
    // Base case
    if (n == 0)
        return 0;

    // Recursive call
    printIncreasing(n - 1);

    // Print after recursion
    if (n > 1) cout << " ";
    cout << n;

    return 0;
}

int main() {
    int n = 5;
    printIncreasing(n);
    return 0;
}