#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Book
{
    string title;
    string author;
    int year;
    int price;
};

struct Product
{
    string name;
    int price;
    int quantity;
};

struct Student
{
    string name;
    int age;
    double grade;
};

struct User
{
    string login;
    string password;
    int age;
};

struct LibraryBook
{
    string title;
    string author;
    int year;
    bool isAvailable;
};

int main()
{
    // №1
    //  vector<Book> book;

    // book.push_back({"Мастер и Маргарита", "Михаил Булгаков", 1940, 4000});
    // book.push_back({"1984", "Джордж Оруэлл", 1949, 3000});
    // book.push_back({"Великий Гэтсби", "Фрэнсис Скотт Фицджеральд", 1925, 2500});
    // book.push_back({"Портрет Дориана Грея", "Оскар Уайльд", 1890, 2200});

    // for(int i = 0; i < book.size(); i++){
    //     cout<< book[i].title << " " << book[i].author << " " << book[i].year << " г. " << book[i].price << " тг." << endl;
    // }
    // cout<< book.size() << endl;
    // cout<< book[0].title << " " << book[0].author << " " << book[0].year << " г. " << book[0].price << " тг." << endl;
    // int last = book.size()-1;
    // cout<< book.back().title << " " << book.back().author << " " << book.back().year << " г. " << book.back().price << " тг." << endl;

    // book.pop_back();

    // for(int i = 0; i < book.size(); i++){
    //     cout<< book[i].title << " " << book[i].author << " " << book[i].year << " г. " << book[i].price << " тг." << endl;
    // }

    // №2
    //  vector<Product> product;

    // product.push_back({"iPhone", 500000, 3});
    // product.push_back({"PC", 5000000, 1});
    // product.push_back({"Bread", 80, 100});
    // product.push_back({"iPhone", 100, 0});
    // product.push_back({"Beer", 500, 0});

    // for(int i = 0; i < product.size(); i++){
    //     cout<< product[i].name << " " << product[i].price << " " << product[i].quantity << endl;
    // }
    // cout<< "---------------------------------" << endl;

    // for(int i = 0; i < product.size(); i++){
    //     if(product[i].quantity > 0){
    //         cout<< product[i].name << " " << product[i].price << " " << product[i].quantity << endl;
    //     }
    // }
    // cout<< "---------------------------------" << endl;

    // int max = 0;
    // for(int i = 1; i < product.size(); i++){
    //     if(product[max].price < product[i].price){
    //         max = i;
    //     }
    // }
    // cout<< product[max].name << " " << product[max].price << " " << product[max].quantity << endl;
    // product.pop_back();
    // cout<< product.empty();

    // №3
    //  vector<Student> students;

    // students.push_back({"Ali", 18, 93.5});
    // students.push_back({"Amina", 19, 79.0});
    // students.push_back({"Dias", 20, 85.5});
    // students.push_back({"Qwerty", 99, 45.0});
    // students.push_back({"Zarina", 18, 98.0});

    // for(int i = 0; i < students.size(); i++){
    //     cout << students[i].name << " " << students[i].age << " " << students[i].grade << endl;
    // }

    // for(int i = 0; i < students.size(); i++){
    //     if(students[i].grade > 80){
    //         cout << students[i].name << " " << students[i].grade << endl;
    //     }
    // }

    // double sum = 0;
    // for(int i = 0; i < students.size(); i++){
    //     sum = sum + students[i].grade;
    // }
    // cout << "Средний балл: " << sum / students.size() << endl;

    // int max = 0;
    // for(int i = 1; i < students.size(); i++){
    //     if(students[max].grade < students[i].grade){
    //         max = i;
    //     }
    // }
    // cout << students[max].name << " " << students[max].grade << endl;

    // students.clear();
    // cout << students.empty() << endl;

    // №4
    //  vector<User> users;

    // users.push_back({"admin", "pass123", 30});
    // users.push_back({"gamer99", "qwerty", 15});
    // users.push_back({"alina_k", "alina2000", 23});
    // users.push_back({"test_user", "1111", 50});

    // for(int i = 0; i < users.size(); i++){
    //     cout << users[i].login << " | " << users[i].age << " лет" << endl;
    // }

    // string searchLogin;
    // cout << "Введите логин для поиска: ";
    // cin >> searchLogin;

    // bool found = false;

    // for(int i = 0; i < users.size(); i++){
    //     if(users[i].login == searchLogin){
    //         cout << "Пользователь найден! Данные: " << users[i].login << " " << users[i].password << " " << users[i].age << endl;
    //         found = true;
    //         break;
    //     }
    // }

    // if(found == false){
    //     cout << "Пользователь не найден." << endl;
    // }

    // №5
    vector<LibraryBook> library;

    library.push_back({"1984", "Orwell", 1949, true});
    library.push_back({"Sapiens", "Harari", 2011, false});
    library.push_back({"Harry Potter", "Rowling", 1997, true});
    library.push_back({"Dune", "Herbert", 1965, false});
    library.push_back({"The Martian", "Weir", 2011, true});

    for (int i = 0; i < library.size(); i++)
    {
        cout << library[i].title << " (" << library[i].year << ")" << endl;
    }

    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].isAvailable == true)
        {
            cout << library[i].title << endl;
        }
    }

    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].year > 2010)
        {
            cout << library[i].title << " - " << library[i].year << endl;
        }
    }

    cout << "Количество всех книг в библиотеке: " << library.size() << endl;

    library.pop_back();
    cout << "Удалили последнюю. Теперь книг: " << library.size() << endl;

    library.clear();
    cout << library.empty() << endl;
}
