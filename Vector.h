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
#ifndef LABTWOCPP_VECTOR_H
#define LABTWOCPP_VECTOR_H
#include <iostream>

class Vector {
    public:
        Vector();
        Vector(double* _array, int _size);
        ~Vector();

        void setArray(double* _array);
        double* getArray();
        int getSize();

        double& operator[] (int index);
        void operator++();
        // void operator++(int);
        void operator--();
        // void operator--(int);

        void printVector();
    private:
        int size;
        double* array;
};

#endif LABTWOCPP_VECTOR_H
