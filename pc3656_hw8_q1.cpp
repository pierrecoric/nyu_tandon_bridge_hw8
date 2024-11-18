//pc3656
//Finding the smallest value in an array.
//2024/11/5

#include <iostream>
#include <string>
using namespace std;

//Functions prototypes.
int minInArray(int arr[], int arrSize);
void populateArray(int (& arr)[], int arrSize, string in);

int main() {
    const int INPUTSIZE = 20;
    int input[INPUTSIZE];
    string indices(""), inputString("");
    
    //Prompting the user for inputs.
    cout << "Please enter 20 integers separated by a space:" << endl;
    getline (cin, inputString);

    //Storing the different values of the input string into the array.
    populateArray (input, INPUTSIZE, inputString);
    
    //Finding the minimal value of the array
    int min = minInArray(input, INPUTSIZE);

    //Finding all the indices at which the value is the minimum.
    for(int i = 0; i < INPUTSIZE; i ++) {
        if(input[i] == min) {
            indices +=  to_string(i) + " ";
        }
    }

    //Ouputing the result.
    cout << "The minimum value is " << min << ", and it is located in the following indices: " << indices << endl;

    //End of the program.
    return 0;
}

//Finding the smallest value of an array.
int minInArray(int arr[], int arrSize) {
    int min = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

//Populating an array with numbers read from a string.
void populateArray(int (& arr)[], int arrSize, string in) {
    int pos(0);
    string current("");
    in += ' ';
    for (int i = 0; i < in.length(); i++) {
        if(in[i] == ' ') {
            arr[pos] = stoi(current);
            current = "";
            pos ++;
            if (pos == arrSize) {
                break;
            }
        }
        else {
            current += in[i];
        }
    }
}