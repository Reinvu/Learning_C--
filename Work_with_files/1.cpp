#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//5

void printRevers(int x){
    if(x < 1) return;
    cout<< x << " ";
    printRevers(x - 1);
}

//6

void print(int x){
    if(x < 1) return;
    print(x - 1);
    cout<< x << " ";
}

//7

int printSum(int x){
    if(x <= 1) return x;
    return x + printSum(x - 1);
}

//8

int printmul(int x){
    if(x <= 1) return x;
    return x * printmul(x - 1);
}

//9

int printfib(int x){
    if(x <= 1) return x;
    return printfib(x - 1) + printfib(x - 2);
}

int main(){


    // 1 and 2

    
    
    // ofstream offile1("user.txt");
    // if (offile1.is_open()){
    // string ofname;
    // int ofage;
    // cout<< "Введите ваше имя: ";
    // cin>> ofname;
    // cout<< "Введите ваш возраст: ";
    // cin>> ofage;

    // offile1<< ofname << " " << ofage;
    // offile1.close();
    // }




    
    // ifstream iffile1("user.txt");
    // if (iffile1.is_open()){
    // string ifname;
    // int ifage;

    // iffile1>> ifname >> ifage;
    // cout << "Привет "<< ifname << "! " << "Тебе " << ifage << " лет";
    // }




    //3 and 4

    // string oftask;

    // cout<< "Введите ваши дела, если хотите пересать вводить дела введите '0' " << endl;
    // ofstream offile2("work.txt");
    // if (offile2.is_open()){
    // while(oftask != "0"){
    //     cout<< "Введите ваше дело: ";
    //     getline(cin, oftask);
    //     if(oftask == "0"){
    //         break;
    //     }
    //     offile2<< oftask << endl;
    // }
    // offile2.close();
    // }

    // string iftask;
    // int num;

    // ifstream iffile2("work.txt");
    // if (iffile2.is_open()){
    // while(getline(iffile2, iftask)){
    //     cout<< "Ваше дело: " << iftask << endl;
    //     num += 1;
    // }
    // cout<< "Всего дел: " << num;
    // iffile2.close();
    // }



    //5
    // printRevers(5);
    // cout<< endl;
    // //6
    // print(5);
    // cout<< endl;
    // //7
    // int sump = printSum(5);
    // cout<< sump << endl;
    // //8
    // int mul = printmul(5);
    // cout<< mul << endl;
    // //9
    // int fib = printfib(6);
    // cout<< fib;
    
    

}
