#ifndef LABTWOCPP_FRACTION_H
#define LABTWOCPP_FRACTION_H
#include <iostream>

class Fraction {
    public:
        Fraction();
        Fraction(int x, int y);
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();

        Fraction operator+(const Fraction& term);
        Fraction operator-(const Fraction& subtrahend);
        Fraction operator*(const Fraction& factor);
        Fraction operator/(const Fraction& divisor);

        ~Fraction();
        void printFraction();
        void reduce();
        static int getTotalFractions();
        static int gcd(int a, int b);
        static int lcm(int a, int b);
        static void printAsFraction(char* decimal_fraction);
        static void printAsFraction(double decimal_fraction);
    private:
        int x;
        int y;
        static int totalFractions;
};

#endif LABTWOCPP_FRACTION_H
