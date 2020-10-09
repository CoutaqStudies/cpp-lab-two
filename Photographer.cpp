//
// Created by Michael on 06.10.2020.
//

#include "Photographer.h"
#include <iostream>

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

Photographer::~Photographer() {

}

void Photographer::printInfo() {
    std::cout<< firstName << " " << lastName << ", " << gender << ", " << rating <<", " << yearOfBirth << ", " << yearOfCareerStart << std::endl;
}
