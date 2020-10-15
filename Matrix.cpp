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
#include <iostream>
#include "Matrix.h"

Matrix::Matrix(){

}
Matrix::Matrix(int _rows, int _columns, double (*function)(int, int)){
  
    rows = _rows;
    columns = _columns;
    array = new double*[columns];
    for (int i = 0; i < columns; i++)
	{
		*(array + i) = new double[rows];
	}
    for(int i = 0; i < rows; i++){
        for(int j = 0; j< columns; j++){
            array[i][j] = function(i,j);
        }
    }
    // array = output;
}
Matrix::~Matrix(){
for (size_t i = 0; i < rows; i++)
	{
		delete[] * (array + i);
	}
	delete[] array;
}

int Matrix::getSize(){
    return rows*columns;
}

double Matrix::at(int i, int j){

}
void Matrix::setAt(int i, int j, double val){


}
void Matrix::printMatrix(){
    for(int i = 0; i <rows; i++){
        for(int j = 0; j< columns;j++){
          std::cout << *(*(array + i) + j) <<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<std::endl;
}