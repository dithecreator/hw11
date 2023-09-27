//
//  myString.hpp
//  hw10
//
//  Created by Дима on 27.09.23.
//

#ifndef myString_hpp
#define myString_hpp
#include <stdio.h>

//конструктор по умолчанию, позволяющий создать строку длиной 80 символов;
//конструктор, позволяющий создавать строку произвольного размера;
//конструктор, который создаёт строку и инициализирует её строкой, полученной от пользователя.
//деструктор;
//методы для ввода строк с клавиатуры и вывода строк на экран.

class myString{
private:
    char* str;
    int length;
    static int counter;
    
public:
     myString();
    void input();
    void print() const;
    myString(char*);
    void MyStrcpy(myString&);// копирование строк
    bool MyStrStr(const char * str);// поиск подстроки в строке
    int  MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
    int MyStrLen();// возвращает длину строки
    void MyStrCat(myString& b); // объединение строк
    void MyDelChr(char c); // удаляет указанный символ
    int MyStrCmp(myString &b); // сравнение строк
    static void createdObjects(); //подсчёт количества созданных обьектов
    myString(const myString&); // конструктор копирования
    char& operator[](const unsigned int index);
    void operator()();
    char* getString() const; //геттер
    int getLength() const;
    void setLength(int);
    void setString(char*);
    myString& operator ->();
    ~myString();

};


myString operator+(const myString obj1, const char c); // obj + symbol
myString operator+(const char c, const myString obj1); // symbol + obj
myString operator+(const myString obj1, int c);
myString operator+(int c, const myString obj1);
myString operator++(const myString obj1, int c);
myString operator++(const myString obj1);
#endif /* myString_hpp */
