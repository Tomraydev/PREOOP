#ifndef Fun_h
#define Fun_h

// klasa bazowa funkcji matematycznych
class Fun{
public:
    // wirtualny destruktor
    virtual ~Fun() = default;
    /* Funkcja wirtualna pozwalajca na wywolywanie funkcji zwracajacych 
    /   wartosc dla danych funkcji matematycznych w klasie pochodnej
    */
    virtual double wartosc(double x){
        return 0.0;
    }
};

#endif