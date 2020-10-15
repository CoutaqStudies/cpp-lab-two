#include <iostream>
#include <algorithm>
#include <stack>
#include <random>
#include "Photographer.h"
#include "Fraction.h"
#include "Vector.h"
#include <ctime>


int getRandomNumber(int min, int max);
void taskOne();
void taskTwo();
void taskThree();

int main() {
    taskThree();
    return 0;
}
#pragma region Task Two
void taskOne(){
    double arr [3] = {4, 5, 2};
    Vector vec = Vector(arr, 3);
    vec.printVector();
}
#pragma region Task One
#pragma region Task Two
//Преобразование: 2D → 1D. Двумерный массив 4х4 вещественных чисел необходимо
//        выложить в один ряд по элементам слева направо и снизу вверх.
//Инициализация: заполнить массив числами x[i][j] = √(i + j + 1).
//Вывод на экран: каждый элемент одномерного массива вывести с точностью четыре
//знака после запятой; каждый элемент двумерного массива – с точностью два знака.
void taskTwo(){
    Fraction fr0 = Fraction(6, 10);
    std::cout << "First fraction:" << std::endl;
    fr0.printFraction();
    std::cout << "First fraction(reduced):" << std::endl;
    fr0.reduce();
    fr0.printFraction();
    Fraction fr1 = Fraction(2, 4);
    std::cout << "Second fraction:" << std::endl;
    fr1.printFraction();
    std::cout << "Second fraction(reduced):" << std::endl;
    fr1.reduce();
    fr1.printFraction();
    Fraction fr2 = fr0+fr1;
    std::cout << "Sum of the two fractions:" << std::endl;
    fr2.printFraction();
    fr2.reduce();
    std::cout << "Sum of the two fractions(reduced):" << std::endl;
    fr2.printFraction();
    std::cout << "Difference of the two fractions:" << std::endl;
    Fraction fr3 = fr0-fr1;
    fr3.printFraction();
    fr3.reduce();
    std::cout << "Difference of the two fractions(reduced):" << std::endl;
    fr3.printFraction();
    std::cout << "Product of the two fractions:" << std::endl;
    Fraction fr4 = fr0*fr1;
    fr4.printFraction();
    fr4.reduce();
    std::cout << "Product of the two fractions(reduced):" << std::endl;
    fr4.printFraction();
    std::cout << "Quotient of the two fractions:" << std::endl;
    Fraction fr5 = fr0/fr1;
    fr5.printFraction();
    fr5.reduce();
    std::cout << "Quotient of the two fractions(reduced):" << std::endl;
    fr5.printFraction();
    std::cout << "Total fractions: " << Fraction::getTotalFractions() << std::endl;
    Fraction::printAsFraction(0.43);
    Fraction::printAsFraction("0.25");
}
// const int arr_size = 4;
// double arrayOfDouble[arr_size][arr_size];
// double taskTwo(){
//     printf("[");
//     for (int i = 0; i < arr_size; i++) {
//         for (int j = 0; j < arr_size; j++) {
//             arrayOfDouble[i][j] = sqrt(i+j+1);
//             printf(" %.3g", arrayOfDouble[i][j]);
//         }
//         if(i != arr_size-1)
//          printf("\n");
//     }
//     printf(" ]");
//     printf("\n=>");
//     printf("\n[");
//     for (int i = arr_size-1; i >= 0; i--) {
//         for (int j = 0; j < arr_size; j++) {
//             printf(" %.5g", arrayOfDouble[i][j]);
//         }
//     }
//     printf("]");
//     return 0;
// }


#pragma endregion
#pragma region Task Three
void taskThree(){
    /*
    Написать собственный класс, в соответствии с вариантом. 
    Продемонстрировать в коде инкапсуляцию данных, применение конструкторов без параметров и с параметрами для инициализации данных.
    Класс должен содержать метод serialize() для сохранения данных класса в файл и метод deserialize() 
    для чтения данных класса из файла по умолчанию в текущей директории,
    а также перегруженные методы serialize(const std::string& filename) 
    и deserialize(const std::string& filename) для работы с файлом с указанным в параметре именем.
    Класс ФОТОГРАФ.
    Данные: имя, фамилия, пол, год рождения, год начала деятельности, рейтинг.
    Создать 2 фотографов в куче и одного в стеке. Данные первых двух заполнить с помощью сеттеров, 
    а третий проинициализировать с помощью конструктора с параметрами. 
    В главной функции проимитировать три фотосессии и голосование зрителей по их результатам 
    (нарастить рейтинг каждого фотографа на случайное число из диапазона 0.0..1.0;
    если количество проголосовавших людей меньше 10, то не наращивать рейтинг). 
    Вывести список фотографов в порядке убывания суммарного рейтинга.
    */
    Photographer ph0, ph1, ph2 = Photographer("Nadezhda", "Krupskaya", "F", 4, 1869, 1903);

    ph0.setFirstName("Alexander");
    ph0.setLastName("Pushkin");
    ph0.setGender("M");
    ph0.setRating(4.1);
    ph0.setYearOfBirth(1799);
    ph0.setYearOfCareerStart(1813);

    ph1.setFirstName("Leo");
    ph1.setLastName("Tolstoy");
    ph1.setGender("M");
    ph1.setRating(3.5);
    ph1.setYearOfBirth(1828);
    ph1.setYearOfCareerStart(1847);

    ph0.printInfo();
    ph1.printInfo();
    ph2.printInfo();

    std::cout<< "---SIMULATING TAKING PICTURES---" << std::endl;

    ph0.takeSomePictures();
    ph1.takeSomePictures();
    ph2.takeSomePictures();

    ph0.printInfo();
    ph1.printInfo();
    ph2.printInfo();
    std::cout<< "---SORTED BY RATING---" << std::endl;

    if(ph0.getRating()>=ph1.getRating()){
        if(ph1.getRating()>=ph2.getRating()){
            ph0.printInfo();  
            ph1.printInfo();
            ph2.printInfo();      
        }else{
            ph0.printInfo();  
            ph2.printInfo();
            ph1.printInfo();    
        }
    }else{
        if(ph0.getRating()>=ph2.getRating()){
            ph1.printInfo();  
            ph0.printInfo();
            ph2.printInfo();    
        }else{
            ph1.printInfo();  
            ph2.printInfo();
            ph0.printInfo();    
        }
    }

    ph0.serialize("pushkin.txt");
    ph0.deserialize("santa.txt");
    std::cout<< "---LOADED FROM FILE santa.txt---" << std::endl;
    ph0.printInfo();
}
#pragma endregion