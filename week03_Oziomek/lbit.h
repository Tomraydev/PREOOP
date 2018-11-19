#ifndef lbit_h
#define lbit_h

/**
* Wypisanie na standardowe wyjście określonych bitów z tablicy "bits"
*/
void printBits(const unsigned char * bits, const int length);
void printBits(const unsigned char * bits, const int first_bit, const int last_bit);

/**
* Ustawienie określonych bitów w tablicy zgodnie z maską "mask"
*/
void resetBits(unsigned char * bits, const unsigned char mask, const int length);
void resetBits(unsigned char * bits, const unsigned char mask, const int first_bit, const int last_bit);

/**
* Funkcja zwraca bit z tablicy bitów "bits" na pozycji "bit"
*/
int getBit(const unsigned char * bits, const int bit);

/**
* Funkcja ustawia wartość bitu na pozycji "bit" w tablicy "bits" na wartość "value"
*/
void setBit(unsigned char * bits, const int bit, const int value);

/**
* Zmiana wartości z 1 na 0 lub z 0 na 1 bitu na pozycji "bit" w tablicy "bits"
*/
void flipBit(unsigned char * bits, const int bit);

#endif
