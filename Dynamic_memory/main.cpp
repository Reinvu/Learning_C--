#include <iostream>
#include <string>

using namespace std;

int main() {
    // №1

    // int size;
    // cout<< "Enter the number of product: ";
    // cin>> size;

    
    // int* price = new int[size];

    // for(int i = 0; i < size; i++){
    //     cout<< "Enter price "<< i+1 << " product: ";
    //     cin>> price[i];
    // }

    // for(int i = 0; i < size; i++){
    //     cout<< i+1 << ". " << price[i] << endl;
    // }

    // int sum = 0;
    // for(int i = 0; i < size; i++){
    //     sum += price[i];
    // }
    // cout<< "Summa: " << sum << endl;
    // int average = sum / size;
    // cout<< "Average: " << average << endl;

    // int max = price[0];
    // int min = price[0];
    // for(int i = 1; i < size; i++){
    //     if(max < price[i]){
    //         max = price[i];
    //     }
    //     if(min > price[i]){
    //         min = price[i];
    //     }
    // }
    // cout<< "Max: " << max << endl;
    // cout<< "Min: " << min << endl;

    // int bigAverage = 0;
    // for(int i = 0; i < size; i++){
    //     if(price[i] > average){
    //         bigAverage += 1;
    //     }
    // }
    // cout<< "Number of product more expensive average price: " << bigAverage << endl;

    // delete[] price;
    // price = nullptr;

    // №2

    // int size;
    // cout<< "Enter the number of days: ";
    // cin>> size;

    
    // int* day = new int[size];

    // for(int i = 0; i < size; i++){
    //     cout<< "Enter temperature: "<< i+1 << " day: ";
    //     cin>> day[i];
    // }

    // for(int i = 0; i < size; i++){
    //     cout<< i+1 << ". " << day[i] << "C" << endl;
    // }

    // int sum = 0;
    // for(int i = 0; i < size; i++){
    //     sum += day[i];
    // }
    // int average = sum / size;
    // cout<< "Average: " << average << "C" << endl;

    // int max = day[0];
    // int min = day[0];
    // for(int i = 1; i < size; i++){
    //     if(max < day[i]){
    //         max = day[i];
    //     }
    //     if(min > day[i]){
    //         min = day[i];
    //     }
    // }
    // cout<< "Max temperature: " << max << "C" << endl;
    // cout<< "Min temperature: " << min << "C" << endl;

    // int bigAverage = 0;
    // for(int i = 0; i < size; i++){
    //     if(day[i] > average){
    //         bigAverage += 1;
    //     }
    // }
    // cout<< "Number of days more average temperature: " << bigAverage << " days" << endl;

    // int minusTemperature = 0;
    // for(int i = 0; i < size; i++){
    //     if(day[i] < 0){
    //         minusTemperature += 1;
    //     }
    // }

    // cout<< "Number of days below zero: " << minusTemperature << endl;

    // delete[] price;
    // price = nullptr;


    // №3

    int size;
    cout<< "Enter the size of Array: ";
    cin>> size;

    int* numbers = new int[size];

    for(int i = 0; i < size; i++){
        cout<< "Enter a number: ";
        cin>> numbers[i];
    }

    int* results = new int[size];

    for(int i = 0; i < size; i++){
        if(numbers[i] % 2 == 0){
            results[i] = numbers[i] * numbers[i];
        }else{
            results[i] = numbers[i] * numbers[i] * numbers[i];
        }
    }

    for(int i = 0; i < size; i++){
        cout<< results[i] << " ";
    }

    delete[] numbers;
    delete[] results;

    numbers = nullptr;
    results = nullptr;



}