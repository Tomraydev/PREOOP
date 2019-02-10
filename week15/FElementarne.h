#ifndef FElementarne_h
#define FElementarne_h
#include "Fun.h"

/*
Implementuje funkcje liniowa daną wzorem:
f(x) = ax + b
*/
class Liniowa : public Fun{
public:
    static Liniowa* utworz(){
        Liniowa *obiekt = new Liniowa;
        return obiekt;
    }
    Liniowa* a(double aa){
        a_ = aa;
        return this;
    }
    Liniowa* b(double bb){
        b_ = bb;
        return this;
    }
    double wartosc(double x){
        return (a_*x + b_);
    }
private:
//wspolczynniki funkcji liniowej
    double a_;
    double b_;
};

/*
Implementuje funkcje kwadratową daną wzorem:
f(x) = ax^2 + bx + c
*/
class Kwadratowa : public Fun{
public:
    double wartosc(double x){
        return (a_*x*x + b_*x + c_);
    }
    static Kwadratowa* utworz(){
        Kwadratowa *obiekt = new Kwadratowa;
        return obiekt;
    }
    Kwadratowa* a(double aa){
        a_ = aa;
        return this;
    }
    Kwadratowa* b(double bb){
        b_ = bb;
        return this;
    }
    Kwadratowa* c(double cc){
        c_ = cc;
        return this;
    }

private:
//wspolczynniki funkcji kwadratowej
    double a_;
    double b_;
    double c_;
};


#endif