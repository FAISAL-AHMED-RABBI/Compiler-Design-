#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment(const string& line) {
    return line.find("//") != string::npos;
}

bool isMultiLineCommentStart(const string& line) {
    return line.find("/*") != string::npos;
}

bool isMultiLineCommentEnd(const string& line) {
    return line.find("*/") != string::npos;
}

bool isComment(const string& line) {
    return isSingleLineComment(line) || isMultiLineCommentStart(line) || isMultiLineCommentEnd(line);
}

int main() {
    string userInput;
    cout << "Enter input (type 'exit' to end):" << endl;

    while (true) {
        getline(cin, userInput);

        if (userInput == "exit") {
            break;
        }

        if (isComment(userInput)) {
          cout << "Comment line: " << userInput << endl;
        } else {
            cout << "Not a comment line" << endl;
        }
    }

    return 0;
}
