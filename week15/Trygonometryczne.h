#ifndef Trygonometryczne_h
#define Trygonometryczne_h

#include <cmath>

// Funkcja trygonometryczna sinus
class Sinus : public Fun{
public:
    // funkcja zwracaja wartosc funkcji sinus w punkcie x
    double wartosc(double x){
        return sin(x);
    }
};

#endif