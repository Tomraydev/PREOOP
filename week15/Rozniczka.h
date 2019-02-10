#ifndef Rozniczka_h
#define Rozniczka_h


/*
Zwraca pochodna w punkcie zadanej funkji według wzoru:
f' = (f(x + h) - f(x - h)) / 2h
gdzie:
h - precyzja
x - punkt
*/
class ProstaRozniczka{
public:
    ProstaRozniczka* z(Fun* funkcja){
        funkcja_zadana = funkcja;
        return this;
    }
    ProstaRozniczka(double prec) : precyzja_(prec){}
    double w(double x){
        return (funkcja_zadana->wartosc(x+precyzja_) - funkcja_zadana->wartosc(x-precyzja_))/(2*precyzja_);
    }
private:
    Fun* funkcja_zadana;
    double precyzja_;
};



#endif