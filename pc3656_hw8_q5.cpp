//pc3656
//2021/11/8
//Name formating.

#include <iostream>
#include <string>
using namespace std;

void sliceName(string input, string fml[]);
void initalize(string fml[]);

int main() {
    string input;
    string fml[3];
    initalize(fml);
    cout << "Please enter your name following the formal Last name, middle name (or initial), last name: " << endl;
    getline (cin, input);
    sliceName(input, fml);
    cout << fml[2] << ", " << fml[0] << " " << fml[1][0] << "." << endl; 
    return 0;
}

//Function that sets each element in the array of strings to an empty string.
void initalize(string fml[]) {
    for(int i = 0; i < 3; i++) {
        fml[i] = "";
    }
}

//Function that slice the input into three strings.
void sliceName(string input, string fml[]) {
    int count = 0;
    for(int i = 0; i < input.length(); i++) {
        if(input[i] == ' '){
            count ++;
            if(count == 3) {
                break;
            }
        }
        else fml[count] += input[i];
    }
}