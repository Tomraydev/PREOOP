#ifndef FZlozona_h
#define FZlozona_h

class FZlozona : public Fun{
public:
    // domyslny konstruktor
    FZlozona() = default;

    // konstruktor pobierajacy dwie funkcje do zlozenia funkcji
    FZlozona(Fun* f1, Fun* f2){
        f1_ = f1;
        f2_ = f2;
    }

    // funkcja zwracajaca wartosc zlozenia funkcji
    double wartosc(double x){
        return f1_->wartosc(f2_->wartosc(x));
    }
private:
    Fun* f1_;   //pierwsza funkcja do zlozenia
    Fun* f2_;   //druga funkcja do zlozenia
};

#endif