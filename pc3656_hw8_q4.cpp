//pc3656
//2024/11/8
//Pin encoder and checker.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//Prototypes.
void createKey(int arr[], int arrSize);
void printKey(int arr[], int arrSize);
string translate(int key[], string code, int length);

int main() {
    srand(time(0));
    const string PIN("31415");
    const int CODE_LENGTH(5);
    int key[10];
    string input;

    //Populate the array challenge.
    createKey(key, 10);

    //Print the key and prompt the user
    cout << "Please enter your PIN according to the following mapping:" << endl;
    printKey(key, 10);

    //get the user input.
    getline(cin, input);

    //Compare the input to the translated PIN.
    if(input == translate(key, PIN, CODE_LENGTH)) {
        cout << "Your PIN is correct." << endl;
    } else cout << "Your PIN is incorrect." << endl;
    return 0;
}

//Populate the key array.
void createKey(int arr[], int arrSize) {
    for(int i = 0; i < arrSize; i ++) {
        arr[i] = (rand() % 3) + 1;
    }
}

//Print the key
void printKey(int arr[], int arrSize){
    int i;
    cout << "PIN: ";
    for (int i = 0; i < arrSize; i ++) {
        cout << i << " ";
    }
    cout << endl << "NUM: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Turn a code into another one according to the pattern of the key.
string translate(int key[], string code, int length) {
    string result("");
    for (int i =0; i < length; i ++) {
        int indice = int(code[i] - 48);
        result += char(key[indice] + 48);
    }
    return result;
}