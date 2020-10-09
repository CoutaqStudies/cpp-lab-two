//
// Created by Michael on 06.10.2020.
//

#ifndef LABTWOCPP_PHOTOGRAPHER_H
#define LABTWOCPP_PHOTOGRAPHER_H
#include <iostream>

class Photographer {
public:
    Photographer();
    Photographer(std::string firstName, std::string lastName, std::string gender, double rating, int yearOfBirth, int yearOfCareerStart);
    std::string getFirstName();
    std::string getLastName();
    std::string getGender();
    double getRating();
    int getYearOfBirth();
    int getYearOfCareerStart();
    void setFirstName(const std::string &firstName);
    void setLastName(const std::string &lastName);
    void setGender(const std::string &gender);
    void setRating(double rating);
    void setYearOfBirth(int yearOfBirth);
    void setYearOfCareerStart(int yearOfCareerStart);
    void printInfo();
    virtual ~Photographer();

private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    double rating;
    int yearOfBirth;
    int yearOfCareerStart;
};


#endif //LABTWOCPP_PHOTOGRAPHER_H
