#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%';
}

int main() {
     string userInput;
    cout << "Enter input: ";
    cin >> userInput;

   cout << "Operators present: ";
    for (char ch : userInput) {
        if (isOperator(ch)) {
            cout << ch << " ";
        }
    }

    cout << endl;

    return 0;
}

