//pc3656
//2024/11/8
//Hide digits in a string.

#include <iostream>
#include <string>
using namespace std;

string processString(string input);
bool onlyDigits(string s);
string checkWord(string s);

int main() {
    string input;
    //Prompting the user.
    cout << "Please enter a line of text:" << endl;
    getline(cin, input);
    cout << processString(input) << endl;
    return 0;
}

string processString(string input) {
    string result("");
    string tmp = "";
    //Iterate over the input and check for each word if it is only digits.
    for(int i = 0; i < input.length(); i ++) {
        if(input[i] == ' '){
            result += checkWord(tmp);
            result += ' ';
            tmp = "";
        } else tmp += input[i];
    }
    //Check the last block.
    result += checkWord(tmp);
    return result;
}

//Function that checks if a given string is only made out of digits.
bool onlyDigits(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(int(s[i]) < 48 || int(s[i]) > 57){
            return false;
        }
    }
    return true;
}

//Function that returns a string of x's if the input is only digits.
string checkWord(string s) {
    string result = s;
    if(onlyDigits(s)){
        result = "";
        for(int i = 0; i < s.length(); i++) {
            result += 'x';
        }
    }
    return result;
}