    /*3. Написать собственный класс, в соответствии с вариантом. Продемонстрировать в коде
инкапсуляцию данных, применение конструкторов без параметров и с параметрами
для инициализации данных. Класс должен содержать метод serialize() для
сохранения данных класса в файл и метод deserialize() для чтения данных класса
из файла по умолчанию в текущей директории, а также перегруженные методы
serialize(const std::string& filename) и deserialize(const std::string&
filename) для работы с файлом с указанным в параметре именем.
Вариант 8 */
    /*Класс ФОТОГРАФ.
Данные: имя, фамилия, пол, год рождения, год начала деятельности, рейтинг.
Создать 2 фотографов в куче и одного в стеке. Данные первых двух заполнить с
помощью сеттеров, а третий проинициализировать с помощью конструктора с
параметрами. В главной функции проимитировать три фотосессии и голосование
зрителей по их результатам (нарастить рейтинг каждого фотографа на случайное число
из диапазона 0.0..1.0; если количество проголосовавших людей меньше 10, то не
наращивать рейтинг). Вывести список фотографов в порядке убывания суммарного
рейтинга.*/
#include <iostream>
#include <algorithm>
#include <stack>
#include <random>
#include "Photographer.h"
#include <ctime>

void Execute(){
   
    Photographer* phHeap = new Photographer();
    phHeap[0] = Photographer();
    phHeap[0].setFirstName("A");
    phHeap[0].setLastName("B");
    phHeap[0].setGender("C");
    phHeap[0].setRating(3);
    phHeap[0].setYearOfBirth(2000);
    phHeap[0].setYearOfCareerStart(2015);
    phHeap[1] = Photographer();
    phHeap[1].setFirstName("X");
    phHeap[1].setLastName("Y");
    phHeap[1].setGender("Z");
    phHeap[1].setRating(4.3);
    phHeap[1].setYearOfBirth(2000);
    phHeap[1].setYearOfCareerStart(2015);
    
    Photographer ph2 = Photographer("test", "d", "m", 2, 1950, 2001);
}