#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

    // №1

    // int sum = 0;
    // int arr[8];
    // srand(time(0));

    // for(int i = 0; i < 8; i++){
    //     arr[i] = rand() % 50 + 1;
    //     sum += arr[i];
    // }
    // cout<< "Сумма всех элементов: " << sum << endl;
    // for(int i = 0; i < 8; i++){
    //     cout<< arr[i] << endl;
    // }


    // №2

    // int arr[5];
    // srand(time(0));
    
    // for(int i = 0; i < 5; i++){
    //     arr[i] = rand() % 20 - 10;
    // }

    // int min = arr[0];
    // int max = arr[0];

    // for(int i = 0; i < 5; i++){
    //     if(min > arr[i]){
    //         min = arr[i];
    //     }
    //     if(max < arr[i]){
    //         max = arr[i];
    //     }
    // }
    // cout<< "Минимальное значение: " << min << endl;
    // cout<< "Максимальное значение: " << max;


    // №3

    // int minus = 0;
    // int plus = 0;
    // int zero = 0;
    // int arr[20];
    // srand(time(0));
    
    // for(int i = 0; i < 20; i++){
    //     arr[i] = rand() % 20 - 10;
    //     if(arr[i] > 0){
    //         plus += 1;
    //     }
    //     else if(arr[i] < 0){
    //         minus += 1;
    //     }
    //     else{
    //         zero += 1;
    //     }
    // }
    // cout<< "Положительных чисел было: " << plus << endl;
    // cout<< "Отрицательный чисел было: " << minus << endl;
    // cout<< "Ноль выпадал " << zero << " раз(а)";


    // №4

    // int sum = 0;
    // int arr[6];
    // srand(time(0));

    // for(int i = 0; i < 6; i++){
    //     arr[i] = rand() % 20 + 1;
    //     if(arr[i] % 2 == 0){
    //         sum += arr[i];
    //     }
    // }
    // cout<< "Сумма чётный чисел: " << sum;


    // №5

    // int arr[5];
    // int num;

    // cout<< "Введите число которое желаете найти: ";
    // cin>> num;
    // cout<< endl;

    // for(int i = 0; i < 5; i++){
    //     cout<< "Введите " << i + 1 << " элемент массива: ";
    //     cin>> arr[i];
    //     if(arr[i] == num){
    //         cout<< "Число " << num << " было найдено в массиве";
    //         break;
    //     }
    //     else{
    //         cout<< "Число " << num << " не было найдено в массиве" << endl;
    //     }
    // }


    // №6

    // int arr[6];

    // for(int i = 0; i < 6; i++){
    //     cout<< "Введите " << i + 1 << " элемент массива: ";
    //     cin>> arr[i];
    //     cout<< endl;
    // }
    // for(int i = 5; i > -1; i--){
    //     cout<< arr[i] << " ";
    // }


    // №7

    // int arr[10];
    // srand(time(0));

    // for(int i = 0; i < 10; i++){
    //     arr[i] = rand() % 20 - 10;
    //     if(arr[i] < 0){
    //         arr[i] = 0;
    //     }
    // }
    // for(int i = 0; i < 10; i++){
    //     cout<< arr[i] << " ";
    // }


    // №8

    // int big = 0;
    // int arr[10];
    // srand(time(0));
    
    // for(int i = 0; i < 10; i++){
    //     arr[i] = rand() % 20 + 1;
    //     if(arr[i] > 10){
    //         big += 1;
    //     }
    // }
    // cout<< "чисел в массиве которые больше 10: " << big;

}
