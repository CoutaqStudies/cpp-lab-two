//
// Created by Michael on 06.10.2020.
//
/*Класс ФОТОГРАФ.
Данные: имя, фамилия, пол, год рождения, год начала деятельности, рейтинг.
Создать 2 фотографов в куче и одного в стеке. Данные первых двух заполнить с
помощью сеттеров, а третий проинициализировать с помощью конструктора с
параметрами. В главной функции проимитировать три фотосессии и голосование
зрителей по их результатам (нарастить рейтинг каждого фотографа на случайное число
из диапазона 0.0..1.0; если количество проголосовавших людей меньше 10, то не
наращивать рейтинг). Вывести список фотографов в порядке убывания суммарного
рейтинга.*/
#include "Photographer.h"
#include <iostream>
#include <random>

Photographer::Photographer() {

}

Photographer::Photographer(std::string _firstName, std::string _lastName, std::string _gender, double _rating, int _yearOfBirth,
                           int _yearOfCareerStart) {
    firstName = _firstName;
    lastName = _lastName;
    gender = _gender;
    rating = _rating;
    yearOfBirth = _yearOfBirth;
    yearOfCareerStart = _yearOfCareerStart;
}

std::string Photographer::getFirstName() {
    return firstName;
}

std::string Photographer::getLastName() {
    return lastName;
}

std::string Photographer::getGender() {
    return gender;
}

double Photographer::getRating() {
    return rating;
}

int Photographer::getYearOfBirth() {
    return yearOfBirth;
}

int Photographer::getYearOfCareerStart() {
    return yearOfCareerStart;
}

void Photographer::setFirstName(const std::string &firstName) {
    Photographer::firstName = firstName;
}

void Photographer::setLastName(const std::string &lastName) {
    Photographer::lastName = lastName;
}

void Photographer::setGender(const std::string &gender) {
    Photographer::gender = gender;
}

void Photographer::setRating(double rating) {
    Photographer::rating = rating;
}

void Photographer::setYearOfBirth(int yearOfBirth) {
    Photographer::yearOfBirth = yearOfBirth;
}

void Photographer::setYearOfCareerStart(int yearOfCareerStart) {
    Photographer::yearOfCareerStart = yearOfCareerStart;
}
void Photographer::serialize(const std::string&filename) {

}
void Photographer::deserialize(const std::string&filename){
}

Photographer::~Photographer() {

}
void Photographer::takeSomePictures(){
    std::srand(time(0));
    int amountOfVotes = (rand() % 100) + 1;
    if(amountOfVotes>10){
        float newRating = float((rand() + 1)%10)/10;
        this->rating+=newRating;
    }
}
void Photographer::printInfo() {
    std::cout<< firstName << " " << lastName << ", " << gender << ", " << rating <<", " << yearOfBirth << ", " << yearOfCareerStart << std::endl;
}
