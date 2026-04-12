#include <iostream>
#include <string>

using namespace std;

// №1
void showName(string name){
    cout<< "Привет " << name << endl;
}

// №2
void showAge(int age){
    cout<< "Ваш возраст: " << age << endl;
}

// №3
int cube(int x){
    int z = x * x * x;
    return z;

}

// №4
int maxNumber(int a, int b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}

// №5
int minNumber(int a, int b){
    if(a >= b){
        return b;
    }
    else{
        return a;
    }
}

// №6
bool isPositive(int x){
    return x >= 0;
}

// №7
bool isDivisibleByFive(int x){
    return x % 5 == 0;
}

// №8
int rectangleArea(int a, int b){
    int c = a * b;
    return c;
}

// №9
int rectanglePerimeter(int a, int b){
    int c = a * 2 + b * 2;
    return c;
}

// №10
int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int divi(int a, int b){
    return a / b;
}

int main(){

    showName("Мадияр");


    showAge(18);


    int result1 = cube(6);
    cout<< result1 << endl; 


    int result2 = maxNumber(10, 20);
    cout<< result2 << endl;


    int result3 = minNumber(40, 30);
    cout<< result3 << endl;
    

    if(isPositive(-3)){
        cout<< "Число положительное" << endl;
    }
    else{
        cout<< "Число не положительное" << endl;
    }


    if(isDivisibleByFive(10)){
        cout<< "Число делится без остатка" << endl;
    }
    else{
        cout<< "Число делится с остатком" << endl;
    }


    int result4 = rectangleArea(3, 8);
    cout<< result4 << endl;


    int result5 = rectanglePerimeter(6, 3);
    cout<< result5 << endl;


    int a;
    int b;

    cout<< "Введите первое число: ";
    cin>> a;
    cout<< "Введите второе число: ";
    cin>> b;

    int result6 = sum(a, b);
    cout<< "Сумма: " << result6 << endl;
    int result7 = sub(a, b);
    cout<< "Разность: " << result7 << endl;
    int result8 = mul(a, b);
    cout<< "Произведение: " << result8 << endl;
    int result9 = divi(a, b);
    cout<< "Деление: " << result9 << endl;
    
}