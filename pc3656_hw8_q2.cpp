//pc3656
//Palindrome checker.
//2024/11/7

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);
string reverseString(string str);

int main () {
    string input;
    //Prompt the user for input and store the data.
    cout << "Please enter a word: ";
    getline(cin, input);
    //Check if the input is a palindrome and inform the user.
    if (isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    }
    else cout << input << " is not a palindrome." << endl;
    //Exit the program
    return 0;
}

//Function that reverses a string.
string reverseString(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}

//Function that return true if the input is a palindrome.
bool isPalindrome(string str) {
    if (reverseString(str) == str) {
        return true;
    }
    else return false;
}