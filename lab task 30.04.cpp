#include <iostream>

using namespace std;

int calculateFactorial(int n) {
    int factorial = 1;

    // Calculate factorial using a loop
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int number;

    // Input the number
   cout << "Enter a number: ";
    cin >> number;

    // Check for non-negative input
    if (number < 0)
        {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate and display the factorial
        int result = calculateFactorial(number);
        cout << "Factorial of " << number << " is: " << result << endl;
    }

    return 0;
}

