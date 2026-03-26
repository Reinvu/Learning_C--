#include <iostream>


using namespace std;
int main(){

// number 1

    int a;
    cout<< "Введите первое число: ";
    cin>> a;

    char op;
    cout<< "Выберите нужный оператор: ";
    cin>> op;

    int b;
    cout<< "Выберите второе число: ";
    cin>> b;
    if(op == '/' && b == 0){
        cout<< "Division by zero";
    }
    else{
        switch(op){
            case '+':
                cout<< a + b;
                break;
            case '-':
                cout<< a - b;
                break;
            case '*':
                cout<< a * b;
                break;
            case '/':
                cout<< a / b;
                break;
            default:
                cout<< "Invalid operator";
        }
    }



//number 2

    // int month;
    // cout<< "Введите нужный месяц: ";
    // cin>> month;

    // switch(month){
    //     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    //         cout<< "31 day";
    //         break;
    //     case 4: case 6: case 9: case 11:
    //         cout<< "30 day";
    //         break;
    //     case 2:
    //         cout<< "28 day";
    //         break;
    //     default:
    //         cout<< "Invaild month";
    // }


//number 3

    // char word;
    // cout<< "Выберите команду: ";
    // cin>> word;

    // switch(word){
    //     case 'w':
    //         cout<< "Up";
    //         break;
    //     case 'a':
    //         cout<< "Left";
    //         break;
    //     case 's':
    //         cout<< "Down";
    //         break;
    //     case 'd':
    //         cout<< "Right";
    //         break;
    //     case 'q':
    //         cout<< "Quit";
    //         break;
    //     default:
    //         cout<< "Unknown";
    // }


// number 4

    // int menu;
    // cout<< "нажмите 1 если хотите войти"<<endl<<"нажмите 2 если нужна помощь"<<endl<<"нажмите 3 если желаете выйти"<<endl;
    // cin>> menu;

    // int sub;
    

    // switch(menu){
    //     case 1:
    //         cout<< "нажмите 1 если хотите войти"<<endl<<"нажмите 2 если хотите авторизоваться"<<endl;
    //         cin >> sub;
    //         switch(sub){
    //             case 1:
    //                 cout<<"Вывести логин";
    //                 break;
    //             case 2:
    //                 cout<<"Вывести Logout";
    //                 break;
    //         }
    //         break;
    //     case 2:
    //         cout<< "Help opened";
    //         break;
    //     case 3:
    //         cout<< "Bye";
    //         break;
    //     default:
    //         cout<< "Invalid";
    // }


//number 5

    // int price;
    // cout<< "Введите цену продукта: ";
    // cin>> price;

    // int code;
    // cout<< "Введите скидку на продукт: "<<endl<<"1. 5%"<<endl<<"2. 10%"<<endl<<"3. 20%"<<endl;
    // cin>> code;

    // switch(code){
    //     case 1:
    //         cout<< "скидка 5%"<<endl;
    //         cout<< "Итоговая цена: "<<endl<< price - (price/20);
    //         break;
    //     case 2:
    //         cout<< "скидка 10%"<<endl;
    //         cout<< "Итоговая цена: "<<endl<< price - (price/10);
    //         break;
    //     case 3:
    //         cout<< "скидка 20%"<<endl;
    //         cout<< "Итоговая цена: "<<endl<< price - (price/5);
    //         break;
    //     default:
    //         cout<< "Итоговоя цена: "<<endl<< price;
    // }

}
