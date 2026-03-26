#include <iostream>
#include <string>

using namespace std;
int main(){

    // №1

    // int const n = 10, m = 5, a = 10, b = 20;
    // int mass[n], mass1[m], mass2[m];


    // for (int i = 0; i < n; i++){
    //     cout<< "Введите числа первого массива: ";
    //     cin>> mass[i]; 
    //     cout<< endl;
    // }


    // for (int i = 0; i < m; i++){
    // mass1[i] = mass[i];
    // mass2[i] = mass[i+5];
    // }

    // for (int i = 0; i < m; i++){
    //     cout << mass1[i] << "   " << mass2[i] << endl;
    // }



    // №2

    // int const n = 10, a = 10, b = 20;
    // int mass1[n], mass2[n], result[n];


    // for (int i = 0; i < n; i++){
    //     cout<< "Введите число первого массива: ";
    //     cin>> mass1[i];
    //     cout<< endl;

    //     cout<< "Введите число второго массива массива: ";
    //     cin>> mass2[i];
    //     cout<< endl;

    //     result[i] = mass1[i] + mass2[i];  
    // }

    // for(int i = 0; i < n; i++){
    //     cout << mass1[i] << " + " << mass2[i];
    //     cout <<" = "<< result[i]<< endl;
    // }



    // №3

    // int mony[7];
    // int dear_day = 0;
    // int total_amount = 0;
    // int average_amount;
    // string week[7] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };

    // for(int i = 0; i < 7; i++){
    //     cout<< "Введите сумму потраченную за "<< week[i] << ": ";
    //     cin>> mony[i];
    //     if(mony[i] > 100){
    //         cout<< "В " << week[i] << " вы потратили более 100 долларов " << endl;
    //         dear_day += 1;
    //     }
    //     total_amount += mony[i];
    // }
    // average_amount = total_amount / 7;

    // cout<< "За неделю в среднем вы потратили " << average_amount << " долларов" << endl;
    // cout<< "Всего за неделю вы потратили " << total_amount << " долларов" << endl;
    // cout<< "Дней когда вы потратили более 100 долларов " << dear_day << " дня";



    // №4

    // double deposit;
    // double rate[12];      // курс доллара к евро по месяцам
    // double percent[12];   // процент начисления по месяцам
    // int month;

    // cout << "Введите сумму депозита в евро: ";
    // cin >> deposit;

    // cout << "Введите курс доллара к евро для 12 месяцев:\n";
    // for (int i = 0; i < 12; i++) {
    //     cout << "Месяц " << i + 1 << ": ";
    //     cin >> rate[i];
    // }

    // cout << "Введите процент начисления по депозиту для 12 месяцев:\n";
    // for (int i = 0; i < 12; i++) {
    //     cout << "Месяц " << i + 1 << ": ";
    //     cin >> percent[i];
    // }

    // cout << "Введите номер месяца (1-12): ";
    // cin >> month;


    // double accrued = deposit * (percent[month - 1] / 100);
    // double dollars = accrued * rate[month - 1];

    // if (dollars >= 500) {
    //     double available = dollars * 0.5;
    //     cout << "Можно обналичить: " << available << " $";
    // } else {
    //     cout << "Сумма меньше 500$, обналичивание невозможно !";
    // }




}