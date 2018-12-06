#include<iostream>
#include"Frac.h"

int Frac::precision = 100;

Frac::Frac(int x, int y){
    l = x;
    m = y;
}

Frac::Frac(double x){
    l = x * precision;
    m = precision;
    double r = (static_cast<double>(l) / m ) - (l/m); // remainder
    if (r == 0){
        l = l/precision;
        m = 1;
    }
    
}

void Frac::print()const{
    std::cout << l << "/" << m;
}

void Frac::print(std::string s)const{
    std::cout << l << "/" << m;
    std::cout << s;
}

void Frac::setCnvPrecision(int p){
    Frac::precision = p;
}

Frac Frac::add(Frac f2)const{ 
    int tmp_l = ( l * f2.m) + (f2.l * m);
    int tmp_m = m * f2.m;
    return {tmp_l, tmp_m};
}