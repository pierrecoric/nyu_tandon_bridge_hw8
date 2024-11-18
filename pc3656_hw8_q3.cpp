//pc3656
//2024/11/8
//Arrays

#include <iostream>
using namespace std;

//Prototypes.
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);
bool isOdd(int n);
void printArray(int arr[], int arrSize);

//Given main.
int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);
    return 0;
}

//Reversing arrays.
void reverseArray(int arr[], int arrSize) {
    for(int i = 0; i < arrSize / 2; i ++) {
        int tmp = arr[i];
        arr[i] = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = tmp;
    }
}

//Removing odd numbers from array.
void removeOdd(int arr[], int& arrSize) {
    int newSize = 0;
    for(int i = 0; i < arrSize; i++) {
        if(!isOdd(arr[i])) {
            arr[newSize] = arr[i];
            newSize ++;
        }
    }
    arrSize = newSize;
}

//Spliting the parity of an array.
void splitParity(int arr[], int arrSize) {
    int switchCount = arrSize - 1;
    int i = 0;
    while(i < switchCount) {
        if(!isOdd(arr[i])) {
            int tmp = arr[i];
            arr[i] = arr[switchCount];
            arr[switchCount] = tmp;
            switchCount --;
        }
        else i++;
    }
}

//Given function to print arrays.
void printArray(int arr[], int arrSize){
    int i;
    for (i = 0; i < arrSize; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

//Helper function to evaluate the parity of an integer.
bool isOdd(int n) {
    if (n % 2 == 0) {
        return false;
    }
    else return true;
}