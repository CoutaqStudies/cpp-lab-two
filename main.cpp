#include <iostream>
#include <algorithm>
#include <stack>
#include <random>
#include "Photographer.h"


int getRandomNumber(int min, int max);

int main() {
    Photographer ph0;
    ph0.setFirstName("A");
    ph0.setLastName("B");
    ph0.setGender("C");
    ph0.setRating(3);
    ph0.setYearOfBirth(2000);
    ph0.setYearOfCareerStart(2015);
    Photographer ph1;
    ph1.setFirstName("X");
    ph1.setLastName("Y");
    ph1.setGender("Z");
    ph1.setRating(4.3);
    ph1.setYearOfBirth(2000);
    ph1.setYearOfCareerStart(2015);
    Photographer ph2 = Photographer("test", "d", "m", 2, 1950, 2001);
    Photographer *phHeap = new Photographer[2];
    phHeap[0] = ph0;
    phHeap[1] = ph1;
    std::stack<Photographer> phStack;
    phStack.push(ph2);
    srand(static_cast<unsigned int>(time(0)));
    int reviews = getRandomNumber(0, 50);
    if(reviews>=10){
        double rating = getRandomNumber(0, 10)/10.0;
        ph0.setRating(ph0.getRating()+rating);
        rating = getRandomNumber(0, 10)/10.0;
        ph1.setRating(ph1.getRating()+rating);
        rating = getRandomNumber(0, 10)/10.0;
        ph2.setRating(ph2.getRating()+rating);
    }
    if(ph0.getRating() >= ph1.getRating() && ph2.getRating() <= ph1.getRating()){
        ph0.printInfo();
    }else if(ph2.getRating() > ph1.getRating()){
        ph2.printInfo();
        ph1.printInfo();
    }else if (ph0.getRating() < ph1.getRating()){
        if(ph1.getRating()> ph2.getRating()){
            ph1.printInfo();
            ph2.printInfo();
            ph0.printInfo();
        } else{
            ph2.printInfo();
            ph1.printInfo();
            ph0.printInfo();
        }
    }


    return 0;
}

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
#pragma region Task Two
//Преобразование: 2D → 1D. Двумерный массив 4х4 вещественных чисел необходимо
//        выложить в один ряд по элементам слева направо и снизу вверх.
//Инициализация: заполнить массив числами x[i][j] = √(i + j + 1).
//Вывод на экран: каждый элемент одномерного массива вывести с точностью четыре
//знака после запятой; каждый элемент двумерного массива – с точностью два знака.
const int arr_size = 4;
double arrayOfDouble[arr_size][arr_size];
double taskTwo(){
    printf("[");
    for (int i = 0; i < arr_size; i++) {
        for (int j = 0; j < arr_size; j++) {
            arrayOfDouble[i][j] = sqrt(i+j+1);
            printf(" %.3g", arrayOfDouble[i][j]);
        }
        if(i != arr_size-1)
         printf("\n");
    }
    printf(" ]");
    printf("\n=>");
    printf("\n[");
    for (int i = arr_size-1; i >= 0; i--) {
        for (int j = 0; j < arr_size; j++) {
            printf(" %.5g", arrayOfDouble[i][j]);
        }
    }
    printf("]");
    return 0;
}


#pragma endregion