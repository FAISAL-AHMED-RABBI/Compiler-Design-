#include <bits/stdc++.h>
using namespace std;
int main(){
string input; cin >> input;
bool validInput = true;
if( (input[0] >= 'a' and input[0] <= 'z') or (input[0] >= 'A' and
input[0] <= 'Z') or input[0] == '_'){
// valid
}
else {
validInput = false;
}
for(int i = 1; i < input.size(); i++) {
if( (input[i] >= 'a' and input[i] <= 'z') or (input[i] >= 'A' and
input[i] <= 'Z') or input[i] == '_' or (input[i] >= '0' and
input[i] <= '9') ){
// valid
}
else {
validInput = false;
}
}
if( validInput == true) {
cout << "Input is an Identifier\n";
}
else {
cout << "Input is not an Identifier\n";
}}
