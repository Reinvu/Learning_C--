#include <iostream>

using namespace std;


void printArray(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << endl;
    }
}

int sumArray(int* arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int findMax(int* arr, int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void twoXElement(int* arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] *= 2;
    }
}

void swapElement(int* arr, int size){
    int swap = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = swap;
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // printArray(arr, size);

    // int sum = sumArray(arr, size);
    // cout<< sum;

    // int max = findMax(arr, size);
    // cout<< max;

    // twoXElement(arr, size);
    // for(int i = 0; i < size; i++){
    //     cout<< arr[i] << endl;
    // }

    swapElement(arr, size);
    for(int i = 0; i < size; i++){
        cout<< arr[i] << endl;
    }    

}
