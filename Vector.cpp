//
// Created by Michael on 15.10.2020.
//
/*Написать классы Vector и Matrix для хранения и обработки одномерных и
двумерных массивов, соответственно. Реализовать задание 2 лабораторной работы No1 с помощью созданных классов.
 Все функции оформить в виде методов классов.
В коде отразить следующее:
 Выделение и освобождение динамической памяти производить в конструкторах и деструкторах классов, соответственно.
 В классе Vector перегрузить оператор индексации []. В классе Matrix добавить методы T at(int i, int j) const и 
setAt(int i, int j, T val), которые позволяют получить и установить значение элемента массива с индексом [i][j],
 T – это тип элементов массива по варианту (int или double).
 Перегрузить операторы инкремента и декремента (как префиксного, так и постфиксного). 
Смысл инкремента / декремента всего массива заключается в инкременте / декременте каждого элемента массива.*/

#include "Vector.h"
#include "Matrix.h"
#include <iostream>

Vector::Vector(){
}
Vector::Vector(Matrix matrix){
    //TODO
}
Vector::Vector(double* _array, int _size){
    array = _array;
    size = _size;
}

Vector::~Vector(){
    delete[] array;
}

void Vector::setArray(double* _array){
    array = _array;
}
double* Vector::getArray(){
    return array;
}
int Vector::getSize(){
    return size;
}

double& Vector::operator[] (const int index){
    return array[index];
}
void Vector::operator++(){
    for(int i =0; i< size; i++){
        array[i]++;
    }
}
void Vector::operator--(){
 for(int i =0; i< size; i++){
        array[i]--;
    }
}

void Vector::printVector(){
    std::cout<< "[ ";
    for(int i =0; i< size; i++){
        if(i!= size-1)
            std::cout<<array[i]<<", ";
        else   
            std::cout<<array[i];
    }
    std::cout<<" ]"<<std::endl;
}